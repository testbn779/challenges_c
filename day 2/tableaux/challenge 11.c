#include <stdio.h>
#include <stdlib.h>
  int main(){
     int n,i,remplacer,nouvelle;
     printf("Veuillez entrer la taille du tableau ");
     scanf("%d",&n);
     int T[n];
     printf("Veuillez entrer les element du tableau \n");
     for(i=0;i<n;i++){
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
     }
    printf("Veuillez saisir la valeur a remplace ");
    scanf("%d",&remplacer);
    printf("Veuillez saisir la nouvelle valeur");
    scanf("%d",&nouvelle);
     for(i=0;i<n;i++){
        if(T[i]== remplacer){
            T[i]=nouvelle;
        }

     }
     printf("le tableau apres le remplacement \n");
     for(i=0;i<n;i++){
        printf("T[%d]=%d\n",i,T[i]);
     }
      return 0;
}
