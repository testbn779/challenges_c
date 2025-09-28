#include <stdio.h>
#include <stdlib.h>
  int main(){
     int n,i,facteur;
     printf("Veuillez entrer la taille du tableau ");
     scanf("%d",&n);
     int T[n];
     printf("Veuillez entrer les element du tableau \n");
     for(i=0;i<n;i++){
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
     }
     printf("Veuillez entrer le facteur ");
     scanf("%d",&facteur);
     for(i=0;i<n;i++){
        printf("%d",T[i]*facteur);
        if(i<n-1){
            printf(",");}
     }
      return 0;
}
