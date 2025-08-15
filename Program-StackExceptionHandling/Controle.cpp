#include "Controle.hpp"
#include "Pilha.hpp"
#include "Elemento.hpp"
#include <iostream>
using namespace std;

Controle::Controle() {}

void Controle::executar() {
    Pilha pilha(5);
    try {
        for (int i = 0; i < 6; ++i) {
            pilha.push(new Elemento(i * 10));
        }
    } catch (const exception& e) {
        cout << "Exceção capturada no push: " << e.what() << endl;
    }

    try {
        pilha.push(nullptr);
    } catch (const exception& e) {
        cout << "Exceção capturada para argumento inválido: " << e.what() << endl;
    }

    try {
        while (true) {
            Elemento* e = pilha.pop();
            cout << "Elemento removido: " << e->getValor() << endl;
            delete e;
        }
    } catch (const exception& e) {
        cout << "Exceção capturada no pop: " << e.what() << endl;
    }
}