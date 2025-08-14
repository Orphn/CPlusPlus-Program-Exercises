#include "Pilha.hpp"

Pilha::Pilha(int cap) : topo(-1), capacidade(cap) {
    elementos = new Elemento*[capacidade];
}

Pilha::~Pilha() {
    for (int i = 0; i <= topo; ++i)
        delete elementos[i];
    delete[] elementos;
}

bool Pilha::isEmpty() const {
    return topo == -1;
}

void Pilha::push(Elemento* e) {
    if (e == nullptr)
        throw std::invalid_argument("Elemento nulo passado para push().");
    if (topo >= capacidade - 1)
        throw std::overflow_error("Stack overflow.");
    elementos[++topo] = e;
}

Elemento* Pilha::pop() {
    if (isEmpty())
        throw std::underflow_error("Stack underflow.");
    return elementos[topo--];
}