#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> v){
    if(v.size() == 0) return true;
    if(v[0] > v[1]) return false;

    v.erase(v.begin());
    return isSorted(v); 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> vetor; 
    int tamanho = 0;
    cout << "Entre com o tamanho do vetor: " << endl;
    cin >> tamanho; 

    for(int i = 0; i < tamanho; i++){
        int valor;
        cin >> valor;
        vetor.push_back(valor); 
    }

    if(isSorted(vetor)){
        cout << "Esta ordenado em ordem crescente!" << endl;
    } else {
        cout << "Nao esta ordenado em ordem crescente!" << endl;
    }

    return 0;
}