#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n = atoi(argv[1]);
  int factorial=1;

  for (int i = 1; i <= n; i++) {
    factorial*=i;
    printf("%d\n", factorial);
  }
  return 0;
}
