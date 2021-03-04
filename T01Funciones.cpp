//Hidalgo Garrido Dario Israel 2AV4
//Tarea 1 Hacer un programa en el cual se haga uso de Funciones
#include<iostream>

using namespace std;

int Primo(int n);

int main(void) {
  int a = 0;
  int b, c;
  cout<<"El siguiente programa te mostrara los numeros primos\n\nde acuerdo al limite que estableceras\n\n";
  cout<<"Cual es el limite de los numeros?";
  cin>>c;
  b=1;
  for (int d = b; d <= c; d++) {
    if (Primo(d)) {
      a++;
      cout<<" ";
      cout<<d;
    }
  }
  return 0;
}


int Primo(int n) {
  if (n == 0 || n == 1) return 0;
  if (n == 4) return 0;
  for (int d = 2; d < n / 2; d++) {
    if (n % d == 0) return 0;
  }
  return 1;
}
