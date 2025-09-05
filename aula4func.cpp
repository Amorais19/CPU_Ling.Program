#include <iostream>
using namespace std;

void escrever(){ // void não necessita de return, ou seja, saída
    cout << "Ola. Estou escrevendo...";
}

int somar(int valor1, int valor2){
    int soma = valor1 + valor2;
    return soma;
}

int main(){
    escrever();

    // atribuindo valor a uma função
    cout << endl << somar(2, 3); // atribuindo valor diretamente

    int val1, val2;
    cout << "\nInforme 2 numeros para realizar uma soma:";
    cin >> val1 >> val2;
    cout << "Soma = " << somar(val1, val2); // atribuindo um valor do usuário

    return 0;
}