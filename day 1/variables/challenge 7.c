#include <stdio.h>
#include <stdlib.h>





   int main() {

  int N1,N2,N3;
  float Moyenne_P;
  printf("Veuillez entrer trois nombres :\n");
  printf("Nombre 1: ");
  scanf("%d",&N1);
  printf("Nombre 2: ");
  scanf("%d",&N2);
  printf("Nombre 3: ");
  scanf("%d",&N3);
  Moyenne_P=(float)(N1*2+N2*3+N3*5)/(2+3+5);
  printf(" la Moyenne ponderee de ces trois nombres est %.2f",Moyenne_P);
  return 0;
}
