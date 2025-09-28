#include <stdio.h>

int main() {
 int i,n,count=0,original;
 printf("Veuillez entrer un nombre");
 scanf("%d",&n);
 original=n;
  do{
    n=n/10;
    count++;

  }while(n!=0);
  printf("le nombre de chiffre de %d est %d",original,count);
    return 0;
}