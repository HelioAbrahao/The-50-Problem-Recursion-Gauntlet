#include<iostream>
#include<string>
using namespace std;

string reverse(string str){
    if(str.size() == 0){
        return str; 
    } else {
        return reverse(str.substr(1)) + str[0]; 
    }
}

int main(){
    cout << "Entre com uma string: ";
    string str;
    getline(cin, str); 

    cout << reverse(str) << endl; 

    return 0; 
}