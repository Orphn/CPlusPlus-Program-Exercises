#include <iostream>
using namespace std;

class Forno {
    int temperatura;
    int tempo;
public:
    Forno(int temp, int t) : temperatura(temp), tempo(t) {}
    void ajustarTemperatura(int temp) { temperatura = temp; }
    void ajustarTempo(int t) { tempo = t; }
    void exibirConfiguracoes() {
        cout << "Forno - Temperatura: " << temperatura
             << "°C, Tempo: " << tempo << "min" << endl;
    }
};

int main() {
    Forno f(180, 30);
    f.ajustarTemperatura(200);
    f.ajustarTempo(45);
    f.exibirConfiguracoes();
    return 0;
}