/* Como tipos de variáveis e seu respectivo espaço utilizado em C++, temos que:

Bool: True ou False. Em geral, utiliza 1 byte de memória;

Char: Armazena um caractere ou uma cadeia de caractere. Em geral, utiliza 1 byte de memória;

Int: Armazena números inteiros que vão de -2.147.486.648 e 2.147.483.647. Em geral, utiliza 4 bytes de memória;

Double: Armazena números com menos de 15 casas decimais com valores que vão de 2.2e-308 a 1.79e308. Em geral, ocupa 8 bytes de memória;

Float: Armazena números com menos de 6 casas decimais com valores que vão de 1.2e-38 a 3.4e-38. Em geral, utiliza 4 bytes de memória.  */

#include <iostream>

using namespace std;

int main(){

    int inteiro;
    inteiro = 10;
    cout << inteiro << endl;

    float real;
    real = 5.2;
    cout << real << endl;

    double real2;
    real2 = 5.2e99;
    cout << real2 << endl;

    bool booleano;
    booleano = true;
    cout << booleano << endl;

    char letra;
    letra = 'b';
    cout << letra << endl;

    string palavra;
    palavra = "bola";
    cout << palavra << endl;

    int idade;
    cout << "Qual a sua idade?" << endl;
    cin >> idade;
    cout << "Idade: " << idade << endl;

    return 0;

}