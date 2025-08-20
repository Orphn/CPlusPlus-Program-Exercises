#include <iostream>
using namespace std;

class Microondas {
    int potencia;
    int tempo;
public:
    Microondas(int pot, int temp) : potencia(pot), tempo(temp) {}
    void definirPotencia(int pot) { potencia = pot; }
    void definirTempo(int temp) { tempo = temp; }
    void exibirConfiguracoes() {
        cout << "Microondas - Potencia: " << potencia
             << "W, Tempo: " << tempo << "s" << endl;
    }
};

int main() {
    Microondas m(800, 60);
    m.definirPotencia(1000);
    m.definirTempo(90);
    m.exibirConfiguracoes();
    return 0;
}