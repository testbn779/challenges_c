#include <stdio.h>

int main() {
   int Nombre;
   printf("Veuillez entrer un nombre ");
   scanf("%d",&Nombre);
   if(Nombre>0){
    printf("ce nombre est positif ");
   }
   else if(Nombre==0){
    printf("ce nombre est null");
   }
   else {
    printf("ce nombre est negative");
   }




    return 0;
}
