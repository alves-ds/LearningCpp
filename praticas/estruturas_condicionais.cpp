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

    //if (media >= 5){
    //    cout << "Aluno aprovado!\n";
    //} else {
    //    cout << "Aluno reprovado!\n";
    //}

    if (media <2.5){
        cout << "Nota final: D\n";
    } else if (media < 5){
        cout << "Nota final: C\n";
    } else if (media < 7.5) {
        cout << "Nota final: B\n";
    } else{
        cout << "Nota final: A\n";
    }

    // Operadores logico: E: &&, OU: ||, Nao: !
    float freq;
    cout << "Qual e a frequencia do aluno?\n";
    cin >> freq;

    if (media >= 5 && freq >= 75){
        cout << "Aluno aprovado!\n";
    } else {
        cout << "Aluno reprovado!\n";
    }

    // Operador ternario: Podemos utilizar operadores ternarios quando quisermos construir condicionais simples, da seguinte forma:
    (media > 5) ? cout << "Aprovado" : cout << "Reprovado";

    return 0;

}