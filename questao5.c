#include <stdio.h>

int main() {
    // Declarando as variáveis para o mês e o dia
    int mes, dia;

    // Pedindo ao usuário para inserir o mês e o dia
    printf("Digite o mes de 1 a 12: ");
    scanf("%d", &mes);
    printf("Digite o dia: ");
    scanf("%d", &dia);

    // Definindo a estação do ano com base no mês e dia
    if ((mes == 12 && dia >= 21) || (mes == 1) || (mes == 2) || (mes == 3 && dia <= 20)) {
        printf("Verao\n");
    } else if ((mes == 3 && dia >= 21) || (mes == 4) || (mes == 5) || (mes == 6 && dia <= 20)) {
        printf("Outono\n");
    } else if ((mes == 6 && dia >= 21) || (mes == 7) || (mes == 8) || (mes == 9 && dia <= 20)) {
        printf("Inverno\n");
    } else if ((mes == 9 && dia >= 21) || (mes == 10) || (mes == 11) || (mes == 12 && dia <= 20)) {
        printf("Primavera\n");
    } else {
        // Caso o mês ou dia não sejam válidos
        printf("Data invalida!\n");
    }

   // Pausa para o usuário pressionar uma tecla antes de fechar
    system("pause");

    return 0;
}
