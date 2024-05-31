#include <stdio.h>

#include <stdlib.h>

int main(int argc, char *argv[]) {
  int kms = atoi(argv[1]);
  double total = 1000.0;
  if (kms <= 6) {
    total += (kms * 2) * 350;
  }

  if (kms > 6 && kms <= 12) {
    total += ((kms-6) * 2) * 250 + 4200;
  }

  if (kms > 12){
    total += ((kms-12) * 2) * 250 + 7200;
  }

  printf("viajaste %d kilometros y me debes $%.2f\n", kms, total);
  return 0;
}
