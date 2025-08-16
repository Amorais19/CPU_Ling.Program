#include<iostream>
using namespace std; // sem 'std::' antes ex: std::cout

int main(){
    cout << "Hello word\n"; // Comandos para quebra de linha: \n e <<endl
    cout << "Aula 2 - Linguagem de Programação\n";
    // system("pause"); para aparecer o "pressione.." na tela para finalizar

    /* Variáveis */
    // bool: 0(false) ou 1(true)
    // char: recebe somete um caracter, no caso uma letra
    // string: recebe uma palavra, caracteres e outros
    // int: recebe números inteiros
    // double: recebe números não inteiros com até 14 casas decimais
    // float: recebe números não inteiros, mas com somente 5 casas decimais

    /* Teste de variáveis */
    int idade = 5; // Atribuição de variável
    cout << "Idade: "<< idade << endl;

    float altura = 1.85;
    cout << "Altura: " << altura << endl;
    
    double peso = 75;
    cout << "Peso: " << peso << endl;

    bool lampada = true;
    cout << "Lampada: " << lampada << endl;

    char letra = 'a';
    cout << "Letra: " << letra << endl;

    return 0;
}