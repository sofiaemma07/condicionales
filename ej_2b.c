// Un programa que imprime el maximo de tres argumentos enteros a, b y c.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int maximo;

  if(a > b) maximo = a;
  

  else maximo = b;
  
  
  if(maximo < c) maximo = c;

  printf("El maximo es %d\n", maximo);

  return 0;
}
