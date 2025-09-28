#include <stdio.h>
#include <stdlib.h>
  int main(){
     int n,i,max;
     printf("Veuillez entrer la taille du tableau ");
     scanf("%d",&n);
     int T[n];
     printf("Veuillez entrer les element du tableau \n");
     for(i=0;i<n;i++){
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
     }
     max=T[0];
     for(i=1;i<n;i++){
     if(max<T[i]){
        max=T[i];
                }
                    }
     printf("le maximum est %d",max);
return 0;
}

