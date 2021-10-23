#include <stdio.h>

int main() {
  float fnum;

  printf("Input a floating point number:");
  scanf("%f", &fnum);

  printf("Given number is %f or %e", fnum, fnum);

  return 0;
}