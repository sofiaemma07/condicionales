// Escribir un programa que simule tirar una moneda. Imprimir “Cara” o “Ceca”

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main(void)
{
  srand(time(NULL));
  int n = (rand() % 2) + 1;

  if (n < 2) printf("Cara\n");

  else printf("Ceca\n");

  return 0;
}
