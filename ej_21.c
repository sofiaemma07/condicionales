// Escribir un programa que acepte un argumento entero n e imprima los números de 1 hasta n y su cuadrado.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n = atoi(argv[1]);
  
    for (int i = 1; i <= n; i++) {
      int result = i*i;
      printf("%i -> %d\n", i, result);
    }

  return 0;
}
