#include <stdio.h>

int main() {
  char* fullName = "Aleksander Kozlowski";
  char* stateAbbr = "MN";
  char* city = "Wayzata";
  char* postalCode = "55391";
  char* address = "3609 Hillcrest Circle";
  printf("Mr. %s | %s %s %s %s",
         fullName, address, city, stateAbbr, postalCode);
  return 0;
}