#include <iostream>

using namespace std;

// Ponteiros sao variaveis que armazenam o endereco de memoria de outras variaveis

int main(){

    int num1;
    num1 = 5;

    int* pont1; 
    pont1 = &num1;

    cout << "Valor da variavel, obtida por meio de seu nome: " << num1 << endl;
    cout << "Valor da variavel, obtida por meio do ponteiro: " << *pont1 << endl;
    cout << "Endereco da variavel, armazenado no ponteiro: " << pont1 << endl;

    // Podemos utilizar ponteiros para apontar para variaveis nao declaradas, neste caso, so conseguiremos acessar o valor ou endereco dessa variavel por meio do ponteiro

    int* pont2 = new int;
    *pont2 = 35;
    cout << *pont2;

    // Para fazermos um ponteiro parar de apontar para um endereco de memoria e evitar um vazamento de memoria, podemos usar o comando delete

    delete pont2;


    return 0;

}