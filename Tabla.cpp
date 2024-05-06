#include <iostream>
using namespace std;
int main(){
int n=0, m=0;
cout<<"Ingrese un número entero positivo: \n";
    cin>> n;
    while(m<11){
        cout<< n << "x" << m << "=" << n*m << "\n";
        m=m+1;
    }
}