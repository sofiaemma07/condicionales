#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]) {
  
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  double D = (b*b) - (4*a*c);
  double x1 = ((-b) + sqrt(D)) / (2*a); 
  double x2 = ((-b) - sqrt(D)) / (2*a);

  
  if (D == 0) {
    printf("La raíz es %.2f\n", x1);
  }
  
  
  else if (D > 0) {
    printf("Las raíces son %.2f y %.2f\n", x1, x2);
  }


  else printf("No existe solución\n");
}
