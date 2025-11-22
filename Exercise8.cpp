#include<iostream>

using namespace std;

int fib(int n){
    if(n <= 1){
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    int number;
    cin >> number; 

    cout << fib(number) << endl; 

    return 0; 
}