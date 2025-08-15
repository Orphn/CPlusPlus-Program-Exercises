#ifndef ARTEFATO_HPP
#define ARTEFATO_HPP
#include <string>
using namespace std;

class Artefato {
private:
    string nome;
    string desc;

public:
    Artefato(const string& nome, const string& desc);
    virtual ~Artefato();
    string getNome() const;
    string getDesc() const;
    void setNome(const string& nome);
    void setDesc(const string& desc);
};

#endif