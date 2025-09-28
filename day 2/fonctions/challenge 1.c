#include <stdio.h>
#include <stdlib.h>
int somme(int A ,B){
   int somme=A+B;

    return somme;
}
int main(){
    int A,B;
    printf("Veuillez entrer deux nombres ");
    scanf("%d%d",&A,&B);
    printf("la somme est %d ",somme(A,B));
}