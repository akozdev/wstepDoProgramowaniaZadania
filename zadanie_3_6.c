#include <stdio.h>
#include <math.h>

int main() {
  double waterVolumeInLitres;
  long double waterMoleculeMass = 3.0 * pow(10, -23);

  printf("Input water volume in litres:");
  scanf("%lf", &waterVolumeInLitres);

  // Convert litres to grams
  double waterMassInGrams = waterVolumeInLitres * 1000;
  long double moleculesCount = waterMassInGrams * waterMoleculeMass;

  printf("%Lf litres of water contain %e water molecules.", waterVolumeInLitres, moleculesCount);

  return 0;
}