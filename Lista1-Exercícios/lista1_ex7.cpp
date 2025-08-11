#include <iostream>
using namespace std;

enum OPERACAO { SOMA, SUBTRACAO, MULTIPLICACAO, DIVISAO };

class Tabuada2{
private:
    int valor;
    OPERACAO operacao;

    void tabuadaAdicao(){
        cout << "Tabuada de Adição para " << valor << ":\n";
        for (int i = 1; i <= 10; i++) {
            cout << valor << " + " << i << " = " << (valor + i) << endl;
        }
    }
    void tabuadaSubtracao(){
        cout << "Tabuada de Subtração para " << valor << ":\n";
        for (int i = 1; i <= 10; i++) {
            cout << valor << " - " << i << " = " << (valor - i) << endl;
        }
    }
    void tabuadaMultiplicacao(){
        cout << "Tabuada de Multiplicação para " << valor << ":\n";
        for (int i = 1; i <= 10; i++) {
            cout << valor << " * " << i << " = " << (valor * i) << endl;
        }
    }
    void tabuadaDivisao(){
        if (valor == 0) {
            cout << "Erro: Divisão por 0 não é permitida!" << endl;
            return;
        }
        cout << "Tabuada de Divisão para " << valor << ":\n";
        for (int i = 1; i <= 10; i++) {
            cout << valor << " / " << i << " = " << (valor / (double)i) << endl;
        }
    }

public:
    Tabuada2(int valor = 1, OPERACAO operacao = SOMA){
        this->valor = valor;
        this->operacao = operacao;
    }
    void setValor(int a){
        this->valor = a;
    }
    int getValor(){
        return valor;
    }
    void setOperacao(OPERACAO operacao){
        this->operacao = operacao;
    }
    OPERACAO getOperacao(){
        return operacao;
    }
    void imprimirTabuada(){
        switch(operacao){
            case SOMA: tabuadaAdicao(); break;
            case SUBTRACAO: tabuadaSubtracao(); break;
            case MULTIPLICACAO: tabuadaMultiplicacao(); break;
            case DIVISAO: tabuadaDivisao(); break;
        }
    }
};

int main(){
    int valor, op;
    cout << "Digite um número inteiro: ";
    cin >> valor;
    cout << "Digite um operador (0 - SOMA, 1 - SUBTRACAO, 2 - MULTIPLICACAO, 3 - DIVISAO): ";
    cin >> op;

    if (op < 0 || op > 3) {
        cout << "Erro: Operação inválida!" << endl;
        return 1;
    }

    Tabuada2* objTabuada = new Tabuada2(valor, static_cast<OPERACAO>(op));
    objTabuada->imprimirTabuada();
    cout << endl;
    cout << "Valor armazenado: " << objTabuada->getValor() << endl;
    cout << "Operador armazenado: " << objTabuada->getOperacao() << endl;

    delete objTabuada;
    return 0;
}