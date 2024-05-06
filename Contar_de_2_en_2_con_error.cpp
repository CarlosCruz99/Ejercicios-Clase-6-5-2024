#include <iostream>
using namespace std;
int main(){
int n=0, m=0;
cout<<"Ingrese un numero entero positivo hasta el que se va a llegar: \n";
cin>> n;
if(n>0){
    while(m<n+1){
        cout<<m <<"\n";
        m=m+2;
    }
    }
    else{
        cout<<"Error, n debe ser positivo \n";
    }
   
}