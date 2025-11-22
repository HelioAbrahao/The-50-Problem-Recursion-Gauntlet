#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int> &vetor, int inicio, int fim, int n){
    if(inicio > fim){
        return -1;
    }

    int meio = (inicio + fim)/2; 
    if(vetor[meio] == n){
        return meio; 
    } else if(vetor[meio] < n){
        return binarySearch(vetor, meio + 1, fim, n);
    } else if(vetor[meio] > n){
        return binarySearch(vetor, inicio, fim - 1, n);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    vector<int>values;
    
    int tamanho = 0; 
    cout << "Entre com o tamanho do vetor: " << endl; 
    cin >> tamanho;

    for(int i = 0; i < tamanho; i++){
        int value;
        cin >> value;
        values.push_back(value); 
    }

    sort(values.begin(), values.end()); 

    cout << "Qual numero voce quer buscar?" << endl;
    int numero;
    cin >> numero; 

    cout << "O numero esta no indice: " << binarySearch(values, 0, tamanho, numero) << endl; 

    return 0; 
}

/*
5
5 4 3 6 1
1 3 4 5 6

0 1 2 3 4 

*/



/*
Caso não recursivo: 

#include <iostream>
#include <vector>
using namespace std;

int buscaBinaria(vector<int> &v, int x) {
    int inicio = 0;
    int fim = v.size() - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (v[meio] == x) {
            return meio; // encontrou o elemento
        }
        else if (v[meio] < x) {
            inicio = meio + 1; // busca na metade direita
        }
        else {
            fim = meio - 1; // busca na metade esquerda
        }
    }

    return -1; // não encontrado
}

int main() {
    vector<int> v = {1, 3, 5, 7, 9, 11, 13};
    int x = 7;

    int pos = buscaBinaria(v, x);

    if (pos != -1)
        cout << "Elemento encontrado na posicao " << pos << endl;
    else
        cout << "Elemento nao encontrado." << endl;

    return 0;
}

*/