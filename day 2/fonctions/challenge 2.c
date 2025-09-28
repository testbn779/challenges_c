#include <stdio.h>
#include <stdlib.h>
int Multiplication(int A ,int B){
   int Produit=A*B;

    return Produit;
}
int main(){
    int A,B;
    printf("Veuillez entrer deux nombres ");
    scanf("%d%d",&A,&B);
    printf("la Multuplication est %d ",Multiplication (A,B));

    return 0;
}
