#ifndef PILHA_HPP
#define PILHA_HPP

#include "Elemento.hpp"
#include <stdexcept>

class Pilha {
private:
    Elemento** elementos;
    int topo;
    int capacidade;

public:
    Pilha(int capacidade = 10);
    virtual ~Pilha();
    bool isEmpty() const;
    void push(Elemento* e);
    Elemento* pop();
};

#endif