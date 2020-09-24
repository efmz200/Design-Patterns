//
// Created by drump1 on 23/9/20.
//
#include <iostream>
using namespace std;
static int suma(int num1,int num2){
    return num1+num2;

}
void adapter(string num1,string num2){
    cout << to_string(suma(stoi(num1),stoi(num2)));
}
void sumador(){
    string num1;
    string num2;
    cout<<"Ingrese el segunfo numero a sumar:\n";
    cin>>num1;
    cout<<"Ingrese el segunfo numero a sumar:\n";
    cin>>num2;
    adapter(num1,num2);

}

