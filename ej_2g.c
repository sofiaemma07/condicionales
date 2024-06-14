#include <stdio.h>
#include <stdlib.h>

// Un programa suma los primeros n números naturales. Al final imprime el valor de la suma

int main(int argc, char *argv[]) {

  int n = atoi(argv[1]);
  int suma = 0; 

    for (int i = 1; i <= n; i++) {
        suma += i; 
 
    }
  printf ("La suma es: %d\n", suma);

  return 0;
}
