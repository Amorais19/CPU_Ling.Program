#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    // soma
    cout << "Informe 2 números para realizar sua soma: ";
    cin >> num1 >> num2;
    cout << "Soma = " << num1+num2;
    
    // subtração
    num1 = num2 = 0;
    cout << "\nInforme 2 números para realizar sua subtração: ";
    cin >> num1 >> num2;
    cout << "Subtração = " << num1-num2;
    
    // multiplicação
    num1 = num2 = 0;
    cout << "\nInforme 2 números para realizar sua multiplicação: ";
    cin >> num1 >> num2;
    cout << "Multiplicação = " << num1*num2;
    
    // divisão
    num1 = num2 = 0;
    cout << "\nInforme 2 números para realizar sua divisão: ";
    cin >> num1 >> num2;
    cout << "Quociente = " << (float)num1/(float)num2 << " & Resto = " << num1%num2;
    
    return 0;
}
