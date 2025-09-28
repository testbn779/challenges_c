#include <stdio.h>

int main() {
   float Moyenne;
   printf("Veuillez entrer votre moyenne ");
   scanf("%f",&Moyenne);
   if(Moyenne<10){
    printf("Mention : recale");

   }
   else if(Moyenne>=10 && Moyenne<12){
    printf("Mentien : passable");
   }
   else if(Moyenne>=12 && Moyenne<14){
    printf("Mnetion : assez bien");
   }
   else if(Moyenne>=14 && Moyenne<16){
    printf("Mention : bien");
   }
   else if(Moyenne>=16)
   {
       printf("Mention : tres bien");
   }
    return 0;
}