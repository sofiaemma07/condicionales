// un programa que acepta un argumento entero 𝑛 ≥ 2 e imprime todos los números 𝑥 ∈ ℕ tal que 𝑥 es par hasta 𝑛 inclusive.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n = atoi(argv[1]);

  for (int x = 0; x <= n; x++) {
    
    if (x%2==0) printf("%d ", x);

    else printf(" ");
  }
  printf("\n");
  return 0;
}
