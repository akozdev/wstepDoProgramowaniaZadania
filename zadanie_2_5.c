#include <stdio.h>
#include <math.h>

int main() {
  int liczba = 10;
  int liczbaTimesTwo = liczba * 2;
  int liczbaSquared = pow(liczba, 2);

  printf("Liczba: %i\nLiczba x 2: %i\nLiczba do kwadratu: %i",
         liczba, liczbaTimesTwo, liczbaSquared);
  
  return 0;
}