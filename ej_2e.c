// Se tira un dado “cargado” donde la probabilidad de sacar un 6 es de 3/8 y para las otras 5 caras de 1/8. El programa imprime el resultado de tirar el dado.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));

  //generar dos numeros aleatorios entre 1 y 6
  int n = (rand() % 8) + 1;

  if (n > 5) printf ("%d\n", 6);


  else printf ("%d\n", n);

  return 0;
}
