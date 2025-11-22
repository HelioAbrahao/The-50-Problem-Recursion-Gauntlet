#include<iostream>
#include<string>
using namespace std;

string decimalToBinary(int n){
    if(n == 0){
        return "0";
    } else if (n == 1){
        return "1"; 
    } else {
        return decimalToBinary(n/2) + to_string(n % 2);   
    }
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    int decimal_number;
    cin >> decimal_number; 

    cout << decimalToBinary(decimal_number) << endl; 

    return 0; 
}