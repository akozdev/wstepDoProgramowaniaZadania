#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("%i\n", INT_MAX + 1); // -2147483648 (start from the smallest, negative integer)
  printf("%f\n", FLT_MAX + 1); // nothing happens, stays at the same value
  printf("%f", 3.24 * pow(10, -76)); // gives 0.000000
  return 0;
}