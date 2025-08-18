#include "Controle.hpp"
#include "Pilha.hpp"
#include <iostream>
#include <string>
using namespace std;

Controle::Controle() {}

void Controle::executar() {
    Pilha<int> p1;
    Pilha<string> p2;

    try {
        for (int i = 0; i < 12; i++) {
            p1.push(new int(i * 10));
        }
    } catch (const exception& e) {
        cout << "[ERRO int] " << e.what() << endl;
    }

    try {
        while (!p1.isEmpty()) {
            int* valor = p1.pop();
            cout << "int pop: " << *valor << endl;
            delete valor;
        }
        p1.pop(); 
    } catch (const exception& e) {
        cout << "[ERRO int] " << e.what() << endl;
    }

    try {
        p2.push(new string("abc"));
        p2.push(nullptr);
    } catch (const exception& e) {
        cout << "[ERRO string] " << e.what() << endl;
    }

    try {
        string* s = p2.pop();
        cout << "string pop: " << *s << endl;
        delete s;
    } catch (const exception& e) {
        cout << "[ERRO string] " << e.what() << endl;
    }
}