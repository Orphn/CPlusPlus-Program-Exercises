#ifndef PILHA_CPP
#define PILHA_CPP

#include "Pilha.hpp"

template<typename T>
Pilha<T>::Pilha() : topo(-1) {}

template<typename T>
Pilha<T>::~Pilha() {
    while (!isEmpty()) {
        delete pop();
    }
}

template<typename T>
bool Pilha<T>::isEmpty() const {
    return topo == -1;
}

template<typename T>
void Pilha<T>::push(T* e) {
    if (!e) throw std::invalid_argument("Null element passed to push()");
    if (topo >= 9) throw std::overflow_error("Stack overflow");
    dados[++topo] = e;
}

template<typename T>
T* Pilha<T>::pop() {
    if (isEmpty()) throw std::underflow_error("Stack underflow");
    return dados[topo--];
}

#endif