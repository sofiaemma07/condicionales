// Programa que calcula el factorial de n, siendo n un entero mayor o igual a cero. Si el argumento n ingresado por línea de comandos es menor a cero imprimie “Error”. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  int n = atoi(argv[1]);
  int factorial = 1;
  int resultado = 0;

 
  if(n < 0) {
    printf("Eror");
    return 0;
  }
    for(int i = 1; i <= n; i++) {
    factorial *= i;
    }

    printf("El factorial de %d es: %d\n", n, factorial);
  
  return 0;
}
