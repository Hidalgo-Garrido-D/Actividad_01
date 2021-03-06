//Hidalgo Garrido Dario Israel 2AV4
//Tarea 1 Hacer un programa en el cual se haga uso de Funciones
#include <iostream>

using namespace std;

int max(int a,int b);

int main(){
    int N1,N2;
    cout<<"Introduzca el valor del primer numero: ";
    cin>>N1;
    cout<<"Introduzca el valor del segundo numero: ";
    cin>>N2;
    max(N1,N2);
    return 0;
    
}

int max(int a,int b){
    if(a>b){
            cout<<"es mayor: "<<a;
            }
    else if(a<b){
            cout<<"es mayor: "<<b;
            }
    else
        cout<<"Error";
        }
