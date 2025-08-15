#include "Controle.hpp"
#include "Artefato.hpp"
#include <iostream>
#include <memory>
using namespace std;

Controle::Controle() {
    cout << "Controle criado!" << endl;
}

void Controle::executar() {
    cout << "--- Teste com unique_ptr para Artefato ---" << endl;
    unique_ptr<Artefato> artefato = make_unique<Artefato>("Artefato 1", "Descrição 1");

    cout << "Nome: " << artefato->getNome() << endl;
    cout << "Desc: " << artefato->getDesc() << endl;

    artefato->setNome("Artefato 2");
    artefato->setDesc("Descrição 2");

    cout << "Novo nome: " << artefato->getNome() << endl;
    cout << "Novo desc: " << artefato->getDesc() << endl;

    cout << "\n--- Teste com unique_ptr para tipo nativo (int) ---" << endl;
    unique_ptr<int> sPointer(new int(42));

    cout << "Valor inicial : " << *sPointer << endl;
    *sPointer = 256;
    cout << "Valor final ..: " << *sPointer << endl;
    cout << "Ponteiro .....: " << sPointer.get() << endl;
}