#include <stdio.h>
#include <stdlib.h>
#include <math.h>




   int main() {
   float x1,y1,z1;
   float x2,y2,z2;
   float Distance;
   printf("Veuillez entrer les cordonnes de la premiere point \n");
   printf("x1= ");
   scanf("%f",&x1);
   printf("y1= ");
   scanf("%f",&y1);
   printf("z1= ");
   scanf("%f",&z1);

   printf("Veuillez entrer les cordonnes de la deuxieme point \n");
   printf("x2= ");
   scanf("%f",&x2);
   printf("y2= ");
   scanf("%f",&y2);
   printf("z2= ");
   scanf("%f",&z2);
   Distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2));
   printf("la distance entre ces deux points est : %.2f ",Distance);
  return 0;
}