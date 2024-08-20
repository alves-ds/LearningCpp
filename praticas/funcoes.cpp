#include <iostream>

using namespace std;

// funcoes do tipo void nao possuem nenhum retorno, podem ser usadas apenas para imprimir algo

// Podemos definir tambem constantes, utilizando o comando define

#define pi 3.14;

void inscrever(){

    cout << "Se inscreva no canal do\n professor Douglas Maioli!\n";

}

int somar(int x, int y){

    int soma;
    soma = x + y;
    return soma;

}

int main(){

    inscrever();
    int a=5, b=4;
    int s;
    s = somar(a, b);
    cout << "Soma: " << s << endl;

    cout << pi;

    return 0;

}