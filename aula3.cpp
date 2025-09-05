#include<iostream>
#include<math.h>
using namespace std;

int main(){
    /* Operações com C++ */

    // subtração
    int valor1 = 10;
    int valor2 = 12;
    int sub = valor1 - valor2;
    cout << "A subtracao de " << valor1 << "-" << valor2 << " e igual a: " << sub << endl;

    // multiplicação
    int mult = valor1 * valor2;
    cout << "A multiplicacao de " << valor1 << "*" << valor2 << " e igual a: " << mult << endl;

    // soma
    int num1, num2;
    cout << "Digite dois valores para a adicao: ";
    cin >> num1 >> num2;
    int soma = num1 + num2;
    cout << "Soma = " << soma << endl;

    // divisão op 1 - op2 - exemplo com alteração do tipo da variável
    int quoc = num1 / num2;
    cout << "Quociente da divisao e: " << quoc << endl;

    int resto = num1 % num2;
    cout << "Resto da divisao e: " << resto << endl;

    float div = (float)num1 / (float)num2;  // colocar algum outro tipo de dado dentro de () antes a uma varíavel, torna a variável aquele tipo de dado somente nessa linha
    cout << "Quociente no tipo float e: " << div << endl;

    // potência
    float potencia = pow(num1, num2);
    cout << "Potencia e: " << potencia << endl;
}