#include <iostream>

using namespace std;

int main(){
    float a,b,resultado=0;

    cout<<"Ingresa el numero a: ";cin>>a;
    cout<<"Ingresa el numero b: ";cin>>b;

    resultado=(a/b)+1;
    cout.precision(2);
    cout<<"Resultado: "<<resultado<<endl;
    return 0;
}