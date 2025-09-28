#include <stdio.h>
#include <stdlib.h>
  int main(){
     int n,i,somme=0;
     float Moyenne;
     printf("Veuillez entrer la taille du tableau ");
     scanf("%d",&n);
     int T[n];
     printf("Veuillez entrer les element du tableau \n");
     for(i=0;i<n;i++){
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
     }
     for(i=0;i<n;i++){
        somme=somme+T[i];
     }
     Moyenne=somme/n;
     printf("la moyenne est : %.2f",Moyenne);
      return 0;
}
