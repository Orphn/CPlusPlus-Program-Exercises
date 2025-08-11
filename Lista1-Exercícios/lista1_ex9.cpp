#include <iostream>
#include <cmath>
using namespace std;

class Potencia{
private:
    double base;
    double expoente;
public:
    Potencia(double base = 0, double expoente = 0){
        this->base = base;
        this->expoente = expoente;
    }
    double getBase() const{
        return base;
    }
    void setBase(double base){
        this->base = base;
    }
    double getExpoente() const{
        return expoente;
    }
    void setExpoente(double expoente){
        this->expoente = expoente;
    }
    double calcula(int base, int expoente){
        this->base = base;
        this->expoente = expoente;
        cout << "Método calcula(int base, int expoente) invocado." << endl;
        return pow(this->base, this->expoente);
    }
    double calcula(int base, double expoente){
        this->base = base;
        this->expoente = expoente;
        cout << "Método calcula(int base, double expoente) invocado." << endl;
        return pow(this->base, this->expoente);
    }
    double calcula(double base, double expoente){
        this->base = base;
        this->expoente = expoente;
        cout << "Método calcula(double base, double expoente) invocado." << endl;
        return pow(this->base, this->expoente);
    }
};

int main(){
    Potencia* p1 = new Potencia();

    p1->setBase(4);
    p1->setExpoente(4);
    cout << "Resultado: " << p1->calcula(p1->getBase(), p1->getExpoente()) << endl;

    p1->setBase(4);
    p1->setExpoente(4.5);
    cout << "Resultado: " << p1->calcula(p1->getBase(), p1->getExpoente()) << endl;

    p1->setBase(4.5);
    p1->setExpoente(4.5);
    cout << "Resultado: " << p1->calcula(p1->getBase(), p1->getExpoente()) << endl;

    delete p1;
    return 0;
}