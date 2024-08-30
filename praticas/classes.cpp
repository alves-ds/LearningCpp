#include <iostream>

using namespace std;

class propaganda{
    private:

    public:

    void inscrever(){
        cout << "Se inscreva no canal do Professor Douglas Maioli!\n";
    }

    void curta(){
        cout << "Curta todos os videos do canal dele!\n";
    }

};


int main(){
    propaganda canal;
    canal.inscrever();
    canal.curta();

    return 0;

}