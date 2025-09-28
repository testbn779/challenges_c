#include <stdio.h>
#include <stdlib.h>
  int main(){
     int n,i,min;
     printf("Veuillez entrer la taille du tableau ");
     scanf("%d",&n);
     int T[n];
     printf("Veuillez entrer les element du tableau \n");
     for(i=0;i<n;i++){
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
     }
     min=T[0];
     for(i=1;i<n;i++){
     if(min>T[i]){
        min=T[i];
                  }
                     }
      printf("le minimum est %d",min);
      return 0;
}
