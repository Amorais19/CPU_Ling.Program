#include<iostream>
using namespace std;

int main(){
    string nome1, nome2, nome3;
    int ano1, ano2, ano3;
    float altura1, altura2, altura3;
    
    cout << "Informe o nome, ano de nascimento e altura da primeira pessoa: ";
    cin >> nome1 >> ano1 >> altura1;
    cout << "Informe o nome, ano de nascimento e altura da segunda pessoa: ";
    cin >> nome2 >> ano2 >> altura2;
    cout << "Informe o nome, ano de nascimento e altura da terceira pessoa: ";
    cin >> nome3 >> ano3 >> altura3;
    
    int idade1 = 2025 - ano1;
    int idade2 = 2025 - ano2;
    int idade3 = 2025 - ano3;
    
    cout << nome1 << " possui " << idade1 << " anos.\n";
    cout << nome2 << " possui " << idade2 << " anos.\n";
    cout << nome3 << " possui " << idade3 << " anos.\n";
    
    return 0;
}
