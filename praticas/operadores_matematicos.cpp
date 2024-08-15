#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a=5, b=2;

    int soma=a+b;
    cout << "Soma: " << soma << endl;

    // Ou podemos fazer a impressão direta, não "gastando" memória para salvar a variávei, da seguinte forma:

    cout << "Soma: " << a+b << endl;

    int sub=a-b;
    cout << "Subtracao: " << sub << endl;

    int mult=a*b;
    cout << "Multiplicacao: " << mult << endl;

    int quocdiv = a/b;
    cout << "Quociente: " << quocdiv << endl;

    int restodiv = a%b;
    cout << "Resto divisao: " << restodiv << endl;

    float div = float(a)/float(b);
    cout << "Divisao: " << div << endl;

    float pot = pow(a,b); // a^b
    cout << "Potencia: " << pot << endl;

    // Incremento e decremento
    cout << "a antigo: " << a << endl;
    a++;
    // pode ser tambem:
    // a = a+1;
    // a+ = 1 essa eh a melhor maneira, pois podemos aumentar em passos maiores do que 1;
    a-= 1; // para fazer o decremento;
    cout << "a novo: " << a << endl;

    return 0;

}