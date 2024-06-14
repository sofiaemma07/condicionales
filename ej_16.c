// Usar dos ciclos for anidados para imprimir un patrón en forma de tabla con asteriscos que indique si i divide a j o j divide a i. Usar un argumento entero n para el tamaño de la tabla

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n = atoi(argv[1]);

    for(int k = 1; k <= n; k++) {
      printf("%d ",k);
    }
      printf("\n");

     for(int i = 1; i <= n; i++) {
        
       for(int j = 1; j <= n; j++) {

         if ((i%j==0) || (j%i==0)) printf("* ");

         else printf("  ");

        }
        
       printf("%d\n",i);

     }
    return 0;
    
}
