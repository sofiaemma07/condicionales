#include <stdio.h>
#include <stdlib.h>

double f(double x) {
  return -4*(x*x) + 12*x;
}

int main(int argc, char *argv[])
{
  if(argc < 2) {
    puts("Te falta el valor de n");
    return 1;
  }

  int n = atoi(argv[1]);
  
  if(n <= 0) {
    puts("n tiene que ser mayor a cero");
    return 1;
  }

  double A = 0.0;
  double x = 0.0;
  double b = 3.0 / n;

  while (x < 3.0) {
    double h = f(x);
    double a = b * h;
    A += a;
    x += b;
  }
  printf("%.2f\n", A);
  return 0;
}
