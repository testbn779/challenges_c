#include <stdio.h>

int main() {
   int N,i,somme=0;
   printf("Veuillez entrer un nombre ");
   scanf("%d",&N);
   for(i=1;i<=N;i++){
    somme=somme+i;
   }
   printf("la somme est : %d ",somme);
    return 0;
}
