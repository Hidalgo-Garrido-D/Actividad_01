//Hidalgo Garrido Dario Israel 2AV4
//Tarea 1 Hacer un programa en el cual se haga uso de Funciones
#include <iostream>
#include <conio.h>
using namespace std; 
int suma(int,int); 
main() {  
int N1,N2;
cout<<"Introdusca el primer valor a sumar: \t";
cin>>N1;
cout<<"Introdusca el segundo valor a sumar: \t";
cin>>N2; 
cout<<"El resultado de la suma es : "<<suma(N1,N2)<<endl;
}

int suma(int a,int b){
return a+b;
}

