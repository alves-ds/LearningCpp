#include <iostream>

using namespace std;

// funcoes do tipo void nao possuem nenhum retorno, podem ser usadas apenas para imprimir algo
void inscrever(){

    cout << "Se inscreva no canal do\n professor Douglas Maioli!";

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

    return 0;

}