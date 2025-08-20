#include <iostream>
#include <string>
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
    const int numForno = 8;
    Forno* fornos[numForno];

    fornos[0] = new Forno(180.0f);
    fornos[1] = new FornoEletrico(200.0f, 220.0f);
    fornos[2] = new FornoGas(220.0f, "GLP");
    fornos[3] = new FornoLenha(150.0f, 5);
    fornos[4] = new FornoInducao(180.0f, 220.0f, true);
    fornos[5] = new FornoResistivo(190.0f, 220.0f, 1500);
    fornos[6] = new FornoGasPetroleo(200.0f, "Gás de petróleo", true);
    fornos[7] = new FornoGasNatural(210.0f, "Metano", 85.0f);

    for (int i = 0; i < numForno; i++){
        fornos[i]->getStatus();
        delete fornos[i];
    }
    return 0;
}