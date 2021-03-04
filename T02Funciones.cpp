//Hidalgo Garrido Dario Israel 2AV4
//Tarea 1 Hacer un programa en el cual se haga uso de Funciones
#include <iostream>
#include <conio.h>
using namespace std; 
void var( ); 
int suma(int,int); 
int resta(int,int); 
main() {  
var(); 
}
 void var( ) {
int N1,N2;
cout<<"Inintrodusca el primer valor a sumar: \t";
cin>>N1;
cout<<"Inintrodusca el segundo valor a sumar: \t";
cin>>N2; 
cout<<"El resultado de la suma es : "<<suma(N1,N2)<<endl;
}

int suma(int a,int b){
return a+b;
}

