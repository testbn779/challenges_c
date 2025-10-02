#include <stdio.h>

int main() {

int n,somme=0,i;
    printf("Veuillez entrer un nombre ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d",i);
            if(i<n){
            printf(",");}}

        }
        return 0;
    }
