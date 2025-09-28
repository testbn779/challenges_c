#include <stdio.h>
#include <stdlib.h>
  int main(){
     int n,i;
     printf("Veuillez entrer la taille du tableau ");
     scanf("%d",&n);
     int T[n],T_copie[n];
     printf("Veuillez entrer les element du tableau \n");
     for(i=0;i<n;i++){
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
     }
      for(i=0;i<n;i++){
        T_copie[i]=T[i];

      }
      for(i=0;i<n;i++){
        printf("T[%d]=%d   , T_copie[%d]=%d\n",i,T[i],i,T_copie[i]);
      }
      return 0;
}