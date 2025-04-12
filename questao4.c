#include <stdio.h>

int main() {
    // Declarando a variável para a nota
    float nota;

    // Pedindo ao usuário para inserir a nota
    printf("Digite a nota de 0 a 100: ");
    scanf("%f", &nota);

    // Verificando em qual faixa a nota se encontra
    if (nota < 0 || nota > 100) {
        // Caso a nota esteja fora do intervalo válido
        printf("Erro! Sua nota deve conter numeros entre 0 e 100.\n");
    } else if (nota >= 80 && nota <= 100) {
        printf("Conceito: A\n");
    } else if (nota >= 70 && nota < 80) {
        printf("Conceito: B\n");
    } else if (nota >= 60 && nota < 70) {
        printf("Conceito: C\n");
    } else if (nota >= 50 && nota < 60) {
        printf("Conceito: D\n");
    } else {
        printf("Conceito: F\n");
    }

   // Pausa para o usuário pressionar uma tecla antes de fechar
    system("pause");

    return 0;
}
