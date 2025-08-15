#include <iostream>
using namespace std;

class Forno{
private:
    float temperatura;
public:
    Forno(float temp = 0.0f){
        this->temperatura = temp;
    }
    void setTemperatura(float temp){
        if (temp < 0.0f)
            this->temperatura = 0.0f;
        else if (temp > 280.0f)
            this->temperatura = 280.0f;
        else
            this->temperatura = temp;
    }
    float getTemperatura(){
        return this->temperatura;
    }
    virtual void getStatus(){
        cout << "Forno cozinhando a " << this->temperatura << " graus." << endl;
    }
};

class FornoEletrico : public Forno{
protected:
    float voltagem;
public:
    FornoEletrico(float temp, float vol) : Forno(temp), voltagem(vol) {}
    void getStatus() override{
        cout << "Forno elétrico cozinhando a " << getTemperatura()
             << " graus com voltagem de " << voltagem << "V." << endl;
    }
};

class FornoGas : public Forno{
protected:
    string tipoGas;
public:
    FornoGas(float temp, string gas) : Forno(temp), tipoGas(gas) {}
    void getStatus() override{
        cout << "Forno a gás cozinhando a " << getTemperatura()
             << " graus usando gás " << tipoGas << "." << endl;
    }
};

class FornoLenha : public Forno{
private:
    int quantidadeLenha;
public:
    FornoLenha(float temp, int lenha) : Forno(temp), quantidadeLenha(lenha) {}
    void getStatus() override{
        cout << "Forno a lenha cozinhando a " << getTemperatura()
             << " graus com " << quantidadeLenha << " pedaços de lenha." << endl;
    }
};

class FornoInducao : public FornoEletrico{
private:
    bool possuiPanelaInducao;
public:
    FornoInducao(float temp, float vol, bool panela)
        : FornoEletrico(temp, vol), possuiPanelaInducao(panela) {}
    void getStatus() override{
        cout << "Forno de indução cozinhando a " << getTemperatura()
             << " graus com voltagem de " << voltagem
             << "V e " << (possuiPanelaInducao ? "com panela de indução." : "sem panela de indução.") << endl;
    }
};

class FornoResistivo : public FornoEletrico{
private:
    int potencia;
public:
    FornoResistivo(float temp, float vol, int pot)
        : FornoEletrico(temp, vol), potencia(pot) {}
    void getStatus() override{
        cout << "Forno resistivo cozinhando a " << getTemperatura()
             << " graus com voltagem de " << voltagem
             << "V e potência de " << potencia << "W." << endl;
    }
};

class FornoGasPetroleo : public FornoGas{
private:
    bool possuiFiltro;
public:
    FornoGasPetroleo(float temp, string gas, bool filtro)
        : FornoGas(temp, gas), possuiFiltro(filtro) {}
    void getStatus() override{
        cout << "Forno a gás de petróleo cozinhando a " << getTemperatura()
             << " graus usando gás " << tipoGas
             << " com filtro " << (possuiFiltro ? "instalado." : "não instalado.") << endl;
    }
};

class FornoGasNatural : public FornoGas{
private:
    float eficiencia;
public:
    FornoGasNatural(float temp, string gas, float eff)
        : FornoGas(temp, gas), eficiencia(eff) {}
    void getStatus() override{
        cout << "Forno a gás natural cozinhando a " << getTemperatura()
             << " graus usando gás " << tipoGas
             << " com eficiência de " << eficiencia << "%." << endl;
    }
};

int main(){
    Forno *forno1 = new Forno(180.0f);
    Forno *forno2 = new FornoEletrico(200.0f, 220.0f);
    Forno *forno3 = new FornoGas(250.0f, "propano");
    Forno *forno4 = new FornoLenha(150.0f, 10);
    Forno *forno5 = new FornoInducao(160.0f, 220.0f, true);
    Forno *forno6 = new FornoResistivo(180.0f, 220.0f, 1500);
    Forno *forno7 = new FornoGasPetroleo(230.0f, "metano", true);
    Forno *forno8 = new FornoGasNatural(240.0f, "butano", 85.0f);

    forno1->getStatus();
    forno2->getStatus();
    forno3->getStatus();
    forno4->getStatus();
    forno5->getStatus();
    forno6->getStatus();
    forno7->getStatus();
    forno8->getStatus();

    delete forno1;
    delete forno2;
    delete forno3;
    delete forno4;
    delete forno5;
    delete forno6;
    delete forno7;
    delete forno8;
    return 0;
}