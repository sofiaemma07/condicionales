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
