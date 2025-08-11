#include <iostream>
using namespace std;

class Tabuada1{
private:
    int valor;
public:
    Tabuada1(int valor = 1){
        this->valor = valor;
    }
    void setValor(int a){
        this->valor = a;
    }
    int getValor(){
        return valor;
    }
    void adicao(){
        cout << "Tabuada de Adição para " << valor << ":\n";
        for (int i = 1; i <= 10; i++) {
            cout << valor << " + " << i << " = " << (valor + i) << endl;
        }
    }
    void subtracao(){
        cout << "Tabuada de Subtração para " << valor << ":\n";
        for (int i = 1; i <= 10; i++) {
            cout << valor << " - " << i << " = " << (valor - i) << endl;
        }
    }
    void multiplicacao(){
        cout << "Tabuada de Multiplicação para " << valor << ":\n";
        for (int i = 1; i <= 10; i++) {
            cout << valor << " * " << i << " = " << (valor * i) << endl;
        }
    }
    void divisao(){
        if (valor == 0) {
            cout << "Erro: Divisão por 0 não é permitida!" << endl;
            return;
        }
        cout << "Tabuada de Divisão para " << valor << ":\n";
        for (int i = 1; i <= 10; i++) {
            cout << valor << " / " << i << " = " << (valor / (double)i) << endl;
        }
    }
};

int main(){
    int valor;
    cout << "Digite um número inteiro: ";
    cin >> valor;

    Tabuada1* objTabuada = new Tabuada1(valor);
    objTabuada->adicao();
    cout << endl;
    objTabuada->subtracao();
    cout << endl;
    objTabuada->multiplicacao();
    cout << endl;
    objTabuada->divisao();
    cout << endl;
    cout << "Valor armazenado: " << objTabuada->getValor() << endl;

    delete objTabuada;
    return 0;
}