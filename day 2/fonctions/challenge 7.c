#include <stdio.h>
int verification(int N){

   if(N%2==0)
   return 1;
   else
    return 0 ;

   }
  int main(){
    int n;
printf("Veuillez entrer un nombre ");
scanf("%d",&n);
if(verification(n))
printf("ce nombre est paire");
else
    printf("ce nombre est impaire");
return 0;
  }
