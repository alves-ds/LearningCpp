#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "Diga um numero inteiro nao negativo: ";
    cin >> n;

    int soma=0;
    int cont=1;
    while (cont <= n){
        soma+=cont;
        cont++;
    }

    cout << "Soma dos numeros de 0 ate " << n << " = " << soma << endl;

    return 0;

}