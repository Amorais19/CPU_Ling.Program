#include <iostream>
#include <math.h>
using namespace std;

int subtrai(int val1, int val2){
    int subtrai = val1 - val2;
    return subtrai;
}

int multiplica(int val1, int val2){
    int multiplica = val1 * val2;
    return multiplica;
}

int divide(int val1, int val2){
    int divide = val1 / val2;
    return divide;
}

int potencia(int val1, int val2){
    int potencia = pow(val1, val2);
    return potencia;
}

void pergunta(){
    cout << "Informe 2 valores para realizarmos sua subtracao, multiplicacao, divisao e potencia: ";
}

int main(){
    int val1, val2;
    pergunta();
    cin >> val1 >> val2;
    cout << "Subtracao = " << subtrai(val1, val2);
    cout << "\nMultiplicacao = " << multiplica(val1, val2);
    cout << "\nDivisao = " << divide(val1, val2);
    cout << "\nPotencia  = " << potencia(val1, val2);

    return 0;
}