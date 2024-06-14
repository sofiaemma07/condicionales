#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  if (b < a) {
    puts("El argumento b debe ser mayor al argumento a");
    return 1;
  }

  for (int i = a; i <= b; i++) {

    if (i % 3 == 0) printf("%d ", i);

  }
  printf("\n");
  return 0;
}
