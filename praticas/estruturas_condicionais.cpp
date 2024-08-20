#include <iostream>

// Comparacoes possiveis: 
// Igualdade: ==
// Diferente: !=
// Outros: >, <, >=, <=

using namespace std;

int main(){
    float nota1, nota2;
    cout << "Informe a nota 1\n";
    cin >> nota1;
    cout << "Informe a nota 2\n";
    cin >> nota2;
    float media=(nota1+nota2)/2;

    cout << "media = " << media << endl;

    if (media >= 5){
        cout << "Aluno aprovado!\n";
    } else {
        cout << "Aluno reprovado!\n";
    }

    return 0;

}