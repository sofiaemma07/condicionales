// Un programa que imprime los números entre el 1000 y el 1999, mostrando 5 números por línea.

#include <stdio.h>
#include <stdlib.h>

 int main() {

   int k = 1;
   int i = 1000;

   while (i < 2000) {

       while ((k <= 5)) {
       printf("%i ",i);
       k += 1;
       i += 1;
       }
     printf("\n");
     k = 1;
}
    return 0;
}
