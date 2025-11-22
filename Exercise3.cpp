#include <iostream>
using namespace std;

int sumNaturalNumbers(int number){
    if(number <= 1){
        return number; 
    }

    return number + sumNaturalNumbers(number - 1); 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    int e;
    cin >> e;

    cout << sumNaturalNumbers(e) << endl; 

    return 0; 
}