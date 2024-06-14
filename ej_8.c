// Escribir un programa que acepte un argumento entero n e imprima n números aleatorios entre 0 y 100. Al finalizar el programa debe imprimir el promedio de los números que aparecieron.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

  srand(time(NULL));

  int n = atoi(argv[1]);
  int nro;
  int suma = 0;

  for(int i = 1; i <= n; i++) {
    nro = (rand() % 100) + 1;
    suma += nro;
  }
  double promedio = (double)suma / n;
  printf("El promedio es %.2f\n", promedio);
  return 0;
}
