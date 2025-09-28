#include <stdio.h>
#include <stdlib.h>
  int main(){
    int n,i;
    printf("Veuillez entrer la taille du tableau ");
    scanf("%d",&n);
    int T[n];
    printf("veuillez entrer les elements du tableau\n");
     for( i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
     }
printf("les elements du tabeau sont :\n");
for(i=0;i<n;i++){

    printf(" T[%d]=%d \n",i,T[i]);
    {

    }

}







    return 0;

  }
