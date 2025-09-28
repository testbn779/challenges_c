#include <stdio.h>

int main() {
   int base,exposant,i,puissance=1;
   printf("Veuillez entrer la base ");
   scanf("%d",&base);
   printf("Veuillez entrer l'exposant ");
   scanf("%d",&exposant);
   for(i=1;i<=exposant;i++){
    puissance=puissance*base;
   }
   printf("le resultat est : %d ",puissance);
    return 0;
}
