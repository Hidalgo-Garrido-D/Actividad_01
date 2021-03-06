//Hidalgo Garrido Dario Israel 2AV4
//Tarea 1 Hacer un programa el cual se haga uso de Funciones
#include <iostream>

using namespace std;

int max(int a,int b);

int main(){
    int N1,N2,N3;
    cout<<"Introduzca el valor del primer numero: ";
    cin>>N1;
    cout<<"Introduzca el valor del segundo numero: ";
    cin>>N2;
    cout<<"Introduzca el valor del tercer numero: ";
    cin>>N3;
    int max1= max(N1,N2);
    int max2= max(max1,N3);
    cout<<"El numero mayor es: "<<max2;
    return 0;
    
}

int max(int a,int b){
    int c;
    if(a>b){c=a;}
    else{ c=b; }
    return c;
        }
