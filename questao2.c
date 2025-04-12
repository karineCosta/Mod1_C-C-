#include <stdio.h>

int main() {
    int idade;

    // Inserindo a idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Verificando a idade e imprimindo a categoria
    if (idade < 18) {
        printf("Menor de idade\n");
    } else if (idade >= 18 && idade <= 64) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }
    
    // Pausa para o usuário pressionar uma tecla antes de fechar
    system("pause");

    return 0;
}
