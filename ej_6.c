// Un programa que acepta un argumento entero n, la cantidad de veces que el programa imprime “Hola mundo”. 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n = atoi(argv[1]);
  int i = 0;

  while(i < n) {
    printf("Hola mundo\n");
    i++;
  }
  return 0;
}
