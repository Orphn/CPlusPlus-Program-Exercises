#include "Elemento.hpp"

Elemento::Elemento(int v) : valor(v) {}

Elemento::~Elemento() {}

int Elemento::getValor() const {
    return valor;
}

void Elemento::setValor(int v) {
    valor = v;
}