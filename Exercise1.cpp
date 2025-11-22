#include<iostream>
using namespace std;

/*
Trying to understand the base case and the recursive steps: 

Factorial of n is defined as n * (n - 1) * (n - 2) * ... * 1, for n = 0, factorial is 1. 

> The base case: n = 0 (factorial is 1)
> How to get that recursive steps:
return n * factorial(n - 1); 

if n = 5: 
return 5 * 4 * 3 * 2 * 1 * 1

*/

long long factorial(long long n){
    if(n <= 1){
        return 1; 
    } else {
        return n * factorial(n - 1); 
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    long long number;
    cin >> number;

    cout << "The factorial of " << number << " is:" << factorial(number) << endl; 

    return 0; 
}