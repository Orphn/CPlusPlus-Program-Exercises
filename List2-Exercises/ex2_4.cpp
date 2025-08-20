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

class Cozinha {
    Geladeira geladeira;
    Microondas microondas;
    Forno forno;
public:
    Cozinha() : geladeira(300), microondas(800, 60), forno(180, 30) {}
    void ligarGeladeira() { geladeira.ligar(); }
    void desligarGeladeira() { geladeira.desligar(); }
    void configurarMicroondas(int pot, int temp) {
        microondas.definirPotencia(pot);
        microondas.definirTempo(temp);
    }
    void configurarForno(int temp, int tempo) {
        forno.ajustarTemperatura(temp);
        forno.ajustarTempo(tempo);
    }
    void exibirEstadoGeral() {
        geladeira.exibirEstado();
        microondas.exibirConfiguracoes();
        forno.exibirConfiguracoes();
    }
};

int main() {
    Cozinha c;
    c.ligarGeladeira();
    c.configurarMicroondas(900, 120);
    c.configurarForno(220, 40);
    c.exibirEstadoGeral();
    return 0;
}