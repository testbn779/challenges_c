#include <stdio.h>

int main() {
   int N,i;
   printf("Veuillez entrer un nombre ");
   scanf("%d",&N);
   for(i=0;i<=10;i++){
    printf("%d * %d =%d\n",N,i,N*i);
   }

    return 0;
}
