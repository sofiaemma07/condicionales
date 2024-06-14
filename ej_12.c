#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

int n = atoi(argv[1]);
int numero;

while (n != 0) {
  int digito = n % 10; // obtiene el ultimo digito
  numero = numero * 10 + digito;
  n /= 10;
 }
printf("El numero invertido es: %d\n", numero);
return 0;
}
