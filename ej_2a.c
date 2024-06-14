// Un programa que imprime el valor absoluto de un número entero n que acepta como argumento.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n = atoi(argv[1]);

  if(n < 0) {
    n = -n;
  }
   printf("El valor absoluto es %d\n", n);
  
   return 0;
}
