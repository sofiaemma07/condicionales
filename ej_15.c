#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n = atoi(argv[1]);

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= n ; j++) {

      if(i==j) printf("1 ");

      else printf("0 ");
    }
    printf("\n");
  }
  return 0;
}
