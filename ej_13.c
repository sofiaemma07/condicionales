// Escribir un programa que decida si un entero positivo n es primo o no. Un número es primo si es divisible sólo por uno y por sí mismo. Por ejemplo 7 es primo pero 33 no.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int n) {

  for (int i = 2; i < n; i++){
    
    if (n % i == 0) return false;
  }
  return true;
}

int main(int argc, char *argv[]){
    
  int n = atoi(argv[1]);
  printf("%s\n", is_prime(n) ? "Es primo" : "No es primo");
}
