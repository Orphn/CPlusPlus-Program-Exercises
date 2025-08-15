#include <iostream>
using namespace std;

class Geladeira {
    int capacidade;
    bool ligada;
public:
    Geladeira(int cap) : capacidade(cap), ligada(false) {}
    void ligar() { ligada = true; }
    void desligar() { ligada = false; }
    void exibirEstado() {
        cout << "Geladeira: " << (ligada ? "Ligada" : "Desligada")
             << ", Capacidade: " << capacidade << " litros" << endl;
    }
};

int main() {
    Geladeira g(300);
    g.ligar();
    g.exibirEstado();
    return 0;
}