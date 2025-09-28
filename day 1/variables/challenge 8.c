#include <stdio.h>
#include <stdlib.h>
#include <math.h>




   int main() {

    float a,b,c ,Moyenne_geometrique  ;
    printf("Veuillez entrer deux nombres : \n");
    printf("Nombre 1 : ");
    scanf("%f",&a);
    printf("Nombre 2 : ");
    scanf("%f",&b);
    printf("Nombre 3 : ");
    scanf("%f",&c);
    if(a<0 || b<0 || c<0){
        printf(" les nombres doivent etre positifs!!! ");
    }
    else
    Moyenne_geometrique =pow(a * b * c,1.0/3.0);
    printf("la moyenne geometrique est : %.2f",Moyenne_geometrique);

  return 0;
}
