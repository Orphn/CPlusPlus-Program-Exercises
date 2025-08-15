#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include <cctype>
using namespace std;

class Validador {
public:
    static bool nomeValido(const string& nome) {
        if (nome.empty()) return false;
        if (nome.find('.') == string::npos) return false;
        for (char c : nome) {
            if (!(isalnum(c) || c == '.' || c == '_' || c == '-')) {
                return false;
            }
        }
        return true;
    }
};

class Controlador {
public:
    void executar(int argc, char* argv[]) {
        if (argc != 3) {
            cerr << "Uso: " << argv[0] << " <arquivo_fonte> <arquivo_destino>" << endl;
            exit(1);
        }

        string fonte = argv[1];
        string destino = argv[2];

        if (!Validador::nomeValido(fonte) || !Validador::nomeValido(destino)) {
            cerr << "Erro: nome de arquivo inválido." << endl;
            exit(2);
        }

        ifstream arquivoFonte(fonte, ios::binary);
        if (!arquivoFonte) {
            cerr << "Erro: não foi possível abrir o arquivo fonte." << endl;
            exit(3);
        }

        ofstream arquivoDestino(destino, ios::binary);
        if (!arquivoDestino) {
            throw runtime_error("Falha ao criar arquivo de destino.");
        }

        char buffer[4096];
        while (arquivoFonte.read(buffer, sizeof(buffer)) || arquivoFonte.gcount() > 0) {
            arquivoDestino.write(buffer, arquivoFonte.gcount());
            if (!arquivoDestino) {
                throw runtime_error("Erro ao escrever no arquivo de destino.");
            }
        }

        arquivoFonte.close();
        arquivoDestino.close();
    }
};

int main(int argc, char* argv[]) {
    try {
        Controlador c;
        c.executar(argc, argv);
    } catch (const exception& e) {
        cerr << "Exceção: " << e.what() << endl;
        return 4;
    }
    return 0;
}