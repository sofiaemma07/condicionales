// Escribir un programa que acepte dos números enteros a y b y calcule su cociente. Si la división de los números no tiene resto igual a cero entonces imprimir “No se pueden dividir” y salir del programa. Por ejemplo, a = 20, b = 5 debe imprimir “4”. Con a = 20 y b = 3 debe imprimir “No se pueden dividir”.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  
  int cociente = a/b;

  if(a%b == 0) printf("%d", cociente);

  else printf("No se pueden dividir");

  printf("\n");

  return 0;
  
}
