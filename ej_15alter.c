#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n = atoi(argv[1]);
  int i = 1;
  int j;

  while (i <= n) {
    j = 1;

    while (j <= n) {
    
    if (i == j) printf("%d ", 1);

    else printf("%d ", 0);

    j+=1;
  }
    printf("\n");
    i+=1;
  }
  return 0;
}
