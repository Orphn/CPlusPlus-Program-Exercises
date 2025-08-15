#include "Artefato.hpp"
#include <iostream>
using namespace std;

Artefato::Artefato(const string& nome, const string& desc)
    : nome(nome), desc(desc) {
    cout << "[Construtor] Artefato criado: " << nome << ", desc: " << desc << endl;
}

Artefato::~Artefato() {
    cout << "[Destrutor] Artefato destruído: " << nome << endl;
}

string Artefato::getNome() const {
    return nome;
}

string Artefato::getDesc() const {
    return desc;
}

void Artefato::setNome(const string& nome) {
    this->nome = nome;
}

void Artefato::setDesc(const string& desc) {
    this->desc = desc;
}