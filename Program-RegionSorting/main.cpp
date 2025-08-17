#include "Region.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void mostrarVetor(const vector<Region>& vetor) {
    for (const auto& r : vetor) {
        cout << r << endl;
    }
}

void insertionSort(vector<Region>& vetor) {
    for (size_t i = 1; i < vetor.size(); ++i) {
        Region chave = vetor[i];
        int j = i - 1;
        while (j >= 0 && chave < vetor[j]) {
            vetor[j + 1] = vetor[j];
            --j;
        }
        vetor[j + 1] = chave;
    }
}

int main() {
    srand(time(nullptr));
    const int tamanho = 10;
    vector<Region> regioes;

    for (int i = 0; i < tamanho; ++i) {
        double areaAleatoria = rand() % 1000 + 1;
        regioes.emplace_back(areaAleatoria);
    }

    cout << "Antes da ordenação:" << endl;
    mostrarVetor(regioes);

    insertionSort(regioes);

    cout << "\nDepois da ordenação:" << endl;
    mostrarVetor(regioes);

    return 0;
}