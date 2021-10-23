#include <stdio.h>

int main() {
  int ageYears,
      ageDays,
      yearToDays = 365;

  printf("How old are you?");
  scanf("%i", &ageYears);

  ageDays = ageYears * yearToDays;

  printf("You live for %i days.", ageDays);
  return 0;
}