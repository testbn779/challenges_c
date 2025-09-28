#include <stdio.h>
#include <stdlib.h>
#include <math.h>




   int main() {
  const float pi=3.14;
  float r,Volume;
  printf("Veuillez entrer le rayon du sphere ");
  scanf("%f",&r);
  Volume = (4 * pi * pow(r, 3))/3;
  printf("le Volume du sphere est %.2f",Volume);
  return 0;
}
