// Un programa que acepta tres argumentos enteros e imprime “iguales” si los tres números son iguales o “no iguales” de lo contrario

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);

  if (a == b && b == c){
    printf("iguales\n");
  }

   else {
    printf("no iguales\n");
   }

   return 0;
}
