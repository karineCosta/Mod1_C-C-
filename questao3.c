#include <stdio.h>
#include <math.h> 

int main() {
    // Declarando as variáveis para os coeficientes a, b e c
    float a, b, c, delta, raiz1, raiz2;

    // Pedindo ao usuário para inserir os coeficientes
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Calculando delta
    delta = b * b - 4 * a * c;

    // Verificando o valor de delta para determinar o tipo de raízes
    if (delta > 0) {
        // Duas raízes reais distintas
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("O calculo tem duas raizes reais distintas: %.2f e %.2f\n", raiz1, raiz2);
    } else if (delta == 0) {
        // Caso de raiz real (raízes iguais)
        raiz1 = -b / (2 * a);
        printf("O calculo tem uma raiz real (raizes iguais): %.2f\n", raiz1);
    } else {
        // No caso de raízes complexas
        float realParte = -b / (2 * a);
        float imagParte = sqrt(-delta) / (2 * a);
        printf("O calculo tem raizes complexas: %.2f + %.2fi e %.2f - %.2fi\n", realParte, imagParte, realParte, imagParte);
    }
   // Pausa para o usuário pressionar uma tecla antes de fechar
    system("pause");

    return 0;
}
