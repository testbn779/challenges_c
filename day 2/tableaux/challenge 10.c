#include <stdio.h>
#include <stdlib.h>
  int main(){
     int n,i,chercher,trouve=0;
     printf("Veuillez entrer la taille du tableau ");
     scanf("%d",&n);
     int T[n];
     printf("Veuillez entrer les element du tableau \n");
     for(i=0;i<n;i++){
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
     }
    printf("Veuillez saisir l'element a chercher ");
    scanf("%d",&chercher);
     for(i=0;i<n;i++){
        if(T[i]== chercher){
            trouve++;
        }

     }
     if(trouve==1){
        printf("cet element est present dans le tableau ");
     }
     else
        printf("cet element n'est pas present dans le tableau");
      return 0;
}
