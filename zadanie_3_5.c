#include <stdio.h>
#include <math.h>

int main() {
  int ageYears;
  double yearToSeconds = 3.156 * pow(10, 7);

  printf("Input your age:");
  scanf("%i", &ageYears);

  printf("Your age measured in seconds is %lf", yearToSeconds);

  return 0;
}