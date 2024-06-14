#include <stdio.h>
#include <stdlib.h>

//Un programa acepta tres argumentos, medio de pago, precio y cantidad
//Efectivo: 15% descuento
//Transferencia: 10% descuento
//Credito: recarga un 5%
//Debito: nada

int main(int argc, char *argv[]) {
  char mp = argv[1][0];
  int p = atoi(argv[2]);
  int c = atoi(argv[3]);
  
  double total = 0;

  if (mp == 'e') total = (p*c) * 0.85;
  

  else if (mp == 'd') total = p * c;
  
  
  else if (mp == 't') total = (p*c) * 0.90;
  
  
  else if (mp == 'c') total = (p*c) * 1.5;
  
  
  printf("Tu monto total a pagar es $%.2f", total);
  
  return 0;
}




