#include <stdio.h>
#include <stdlib.h>
#include <math.h>




   int main() {

  float Surface,longueur,largeur;
  printf("Veuillez entrer la longueur du rectongle ");
  scanf("%f",&longueur);
  printf("Veuillez entrer la largeur du rectongle ");
  scanf("%f",&largeur);
  Surface = longueur * largeur;
  printf("la surface du rectongle est: %.2f",Surface);
  return 0;
}