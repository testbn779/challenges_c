#include <stdio.h>

int main() {

int n,somme=0,i;
    printf("Veuillez entrer un nombre ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        somme=somme+i;
    }
    printf("la somme des %d premiers nombres est %d",n,somme);
return 0;
}
