//objetivo: sumatoria
// debug
#include<iostream>
#include<stdio.h>
using namespace std;
int main (void){
  int numero, i, sumatoria = 0;

  printf("Ingresa un numero: ");
  scanf("%d", &numero);

  sumatoria = (numero * (numero + 1)) / 2;

  printf("La sumatoria de 1 a %d es %d", numero, sumatoria);

return 0;
}