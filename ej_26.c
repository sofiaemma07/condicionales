#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double basilea(int n) {

  double suma = 0;
  
  for (int i = 1; i <= n; i++) {
    double cuadrados = 1.0 / (i * i); 
    suma += cuadrados;
  }
  return suma;
}
                
int main(int argc, char *argv[])
{
  int n = atoi(argv[1]);
  printf("El resultado de la suma es: %.5f\n", basilea(n));
  return 0;
}
