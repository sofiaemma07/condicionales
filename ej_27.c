#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  int n = atoi(argv[1]);

  for (int i = 1; i <= n ; i++) {
    int cuenta = pow(2, i);
    int result = cuenta;
    printf("%d\n", result);
  }
  return 0;
}
