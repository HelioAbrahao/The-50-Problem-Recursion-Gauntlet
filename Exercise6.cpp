#include<iostream>
#include<string>
using namespace std;

double pot(double x, int n){
    long long expoente = n; 

    if(expoente == 0) return 1.0; 
    if(expoente < 0) return 1.0 / pot(x, -expoente);

    return x * pot(x, n - 1); 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double number;
    int x;

    cin >> number;
    cin >> x;

    cout << pot(number, x) << endl; 
    
    return 0;
}