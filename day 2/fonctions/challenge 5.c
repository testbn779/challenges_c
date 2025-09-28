#include <stdio.h>
#include <stdlib.h>
int Minimum(int A ,int B){
    int min=A;
   if(min<B);
    min=B;


    return min;
}
int main(){
    int A,B;
    printf("Veuillez entrer deux nombres ");
    scanf("%d%d",&A,&B);
    printf("le Mnimum est %d ",Minimum (A,B));

    return 0;
}
