// #include<iostream>
// #include<vector>

// using namespace std;


// /*
// Sum of array elements using recursion
// */

// int arraySum(vector<int> vetor){
//     if(vetor.size() == 0){
//         return 0;
//     }

//     int elem = vetor.back();
//     vetor.pop_back();

//     return elem + arraySum(vetor); 
// }


// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     vector<int> values(5);

//     for(int i = 0; i < 5; i++){
//         cin >> values[i]; 
//     }
    
//     cout << arraySum(values) << endl; 

//     return 0; 
// }

#include<iostream>
#include<vector>
using namespace std;

int RecSum(vector<int>& v, int n){
    if(n == 0) return 0; 

    return v[n - 1] + RecSum(v, n - 1); 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> e;
    int tamanho_vetor = 0;

    cout << "Entre com o tamanho do vetor: " << endl; 
    cin >> tamanho_vetor; 

    for(int i = 0; i < tamanho_vetor; i++){
        int valor; 
        cin >> valor;
        e.push_back(valor); 
    }

    cout << "Soma dos elementos do vetor: " << RecSum(e, tamanho_vetor) << endl; 

    return 0;
}