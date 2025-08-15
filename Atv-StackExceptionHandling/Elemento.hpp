#ifndef ELEMENTO_HPP
#define ELEMENTO_HPP

class Elemento {
private:
    int valor;

public:
    Elemento(int v);
    virtual ~Elemento();
    int getValor() const;
    void setValor(int v);
};

#endif