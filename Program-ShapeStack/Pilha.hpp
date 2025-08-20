#ifndef PILHA_HPP
#define PILHA_HPP

#include <stdexcept>

template<typename T>
class Pilha {
private:
    T* dados[10];
    int topo;

public:
    Pilha();
    virtual ~Pilha();

    bool isEmpty() const;
    void push(T* e);
    T* pop();
};

#include "Pilha.cpp"

#endif