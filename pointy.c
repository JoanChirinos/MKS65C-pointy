#include <stdio.h>

int main() {

  //declarations
  unsigned int n = 314159265358;
  char * p = &n;

  //printing to show initial values
  printf("n in decimal: %d\n", n);
  printf("n in hex: %x\n", n);
  printf("\n");

  //for loop to show parts of hex
  int ctr;
  for (ctr = 0; ctr < 4; ctr++) {
    printf("part %d of n: %hhx\n", ctr + 1, *p);
    p++;
  }

  printf("\n");

  //reset pointer location
  p = &n;

  //loop through pointer locations and increment
  //bytes by 1
  for (ctr = 0; ctr < 4; ctr++) {
    (*p)++;
    p++;
  }

  printf("after incrementing bytes by 1:\n");
  printf("n in dec: %d\n", n);
  printf("n in hex: %x\n", n);

  printf("\n");

  //reset pointer location
  p = &n;

  //loop through pointer locations and increment
  //bytes by 16
  for (ctr = 0; ctr < 4; ctr++) {
    (*p) += 0x10;
    p++;
  }

  printf("after incrementing bytes by 16:\n");
  printf("n in dec: %d\n", n);
  printf("n in hex: %x\n", n);
}
