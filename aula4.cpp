#include <iostream>
using namespace std;

int main(){
    int valor1 = 5;

    cout << "----- Aula 4 -----\n";
    cout << "-- Incrementacao e Decrementacao --\n";
    // Incrementação
    cout << "Valor antigo: " << valor1 << endl;
    valor1 = valor1 + 1; // +=  ++
    cout << "Valor atual: " << valor1 << endl;

    // Incrementação multiplicação
    cout << "Valor antigo: " << valor1 << endl;
    valor1 *= 3;
    cout << "Valor atual: " << valor1 << endl;

    // Incrementação divisão
    cout << "Valor antigo " << valor1 << endl;
    valor1 /= 3;
    cout << "Valor atual " << valor1 << endl;

    // Decrementação
    valor1 = valor1 = 1; // -=  --

    return 0;
}