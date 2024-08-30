#include <iostream>

using namespace std;

class carro{
    private:
    int ano;
    float valor, km;

    public:

    //construtor
    carro(int a, float val, float kmt);

    void setano(int a);

    int getano();

    void setvalor(float val);

    float getvalor();

    void setkm(float kmt);

    float getkm();

};

int main(){

    carro palio(1999, 10000, 15000);
    //palio.setano(1999);
    //palio.setvalor(10000);
    //palio.setkm(15000);

    cout << "O veiculo Palio eh de ano " << palio.getano() << " Tem " << palio.getkm() << " quilometros rodados e custa " << palio.getvalor() << " reais!" << endl;

    return 0;

}

//construtor
    carro::carro(int a=0, float val=-1, float kmt=-1){
        ano = a;
        valor = val;
        km = kmt;
    }

    void carro::setano(int a){
        ano = a;
        //this->ano = ano;
    }

    int carro::getano(){
        return ano;
    }

    void carro::setvalor(float val){
        valor = val;
    }

    float carro::getvalor(){
        return valor;
    }

    void carro::setkm(float kmt){
        km = kmt;
    }

    float carro::getkm(){
        return km;
    }