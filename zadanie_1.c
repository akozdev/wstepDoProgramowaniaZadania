#include <stdio.h>

int main() {
  double valueInInches, valueInCm;
  float inchToCmRatio = 2.54;

  printf("Input value in inches: ");
  scanf("%lf", &valueInInches);

  valueInCm = valueInInches * inchToCmRatio;

  char* inchStringForm = valueInInches == 1 ? "inch" : "inches";
  char* cmStringForm = valueInCm == 1 ? "centimeter" : "centimeters";

  printf("%f %s is equal to %f %s",
         valueInInches, inchStringForm,
         valueInCm, cmStringForm);

  return 0;
}