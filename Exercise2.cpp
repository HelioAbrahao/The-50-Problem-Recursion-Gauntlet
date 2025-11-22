#include<iostream>
using namespace std;

void printNumbers(int number){
    if(number == 0) return; 

    printNumbers(number - 1); 
    cout << number << " ";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int number;
    cin >> number; 

    printNumbers(number);

    return 0; 
}

