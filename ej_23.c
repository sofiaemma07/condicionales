/* Escribir un programa que acepte dos argumentos enteros 𝑥, 𝑦 representando coordenadas en el plano cartesiano. El programa debe imprimir a qué cuadrante pertenece el punto. Los cuadrantes del plano cartesiano se
representan con los números romanos I, II, III y IV */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);

  if (argc < 3) {
    printf("Debes ingresar 2 argumentos, la coordenada en x y la coordenada en y\n");
    return 1;
  }

  else if (argc > 3) {
   printf("Debes ingresar 2 argumentos, la coordenada en x y la coordenada en y\n");
    return 1;
  }

  else {

    if (x<0 && y>0) printf("I\n");

    else if (x>0 && y>0) printf("II\n");

    else if (x<0 && y<0) printf("III\n");

    else if (x>0 && y<0) printf("IV\n");

    else printf("No pertenece a ninguno de los cuadrantes\n");

  }

  return 0;
}
