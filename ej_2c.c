#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  
  int a = atoi(argv[1]);
    
  if (a > 0) {
    printf("El numero es positivo");
  }

  else if (a < 0) {
    printf("El numero es negativo");
  }
   
  else if (a == 0) {
    printf("El numero es cero");
  }
  printf("\n");
  return 0;
}
