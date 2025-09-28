#include <stdio.h>

int main() {
 int i,n,inverse;
 printf("Veuillez entrer un nombre");
 scanf("%d",&n);
  do{
        inverse=inverse*10 + n%10;
        n=n/10;

  }while(n!=0);
  printf("linverse de %d est %d",n,inverse);
    return 0;
}
