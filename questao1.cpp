#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // apontamento dos números
    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    // Comparação e saída
    if (num1 > num2) {
        cout << "O maior numero: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "O maior numero: " << num2 << endl;
    } else {
        cout << "Os numeros sao iguais." << endl;
    }
        // Pausa para o usuário pressionar uma tecla antes de fechar
    system("pause");

    return 0;
}
