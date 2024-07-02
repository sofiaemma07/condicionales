/* Leer dos números y mostrar en pantalla los números comprendidos entre ambos. Tenga en cuenta que no se sabe cual de los números es mayor (pueden leerse en cualquier orden). */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n1 = atoi(argv[1]);
  int n2 = atoi(argv[2]);
  int numInicial;
  int mayor;

  if(n1 < n2) {
    numInicial = n1 + 1;
    mayor = n2;
  }
  else {
    numInicial = n2 + 1;
    mayor = n1;
  }
    for (int i = numInicial; i < mayor; i++) {
      printf("%d ", i);
    }
    printf("\n");
    return 0;
}
