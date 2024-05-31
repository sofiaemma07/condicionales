#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n = atoi(argv[1]);
  int a = 0;
  int b = 1;
  int c;

  for(int i = 0; i < n; i++) {
    c = a + b;
    printf("%d ", a);
    a = b;
    b = c;
  }
  printf("\n");
  return 0;
}
