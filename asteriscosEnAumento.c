/* Modo de uso: ingresar un argumento n entero 
ej : n = 3 | salida en pantalla 
*
** 
*** 
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n = atoi(argv[1]);
  
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      printf("*");
    }
    printf("\n");

  }
  return 0;
}

