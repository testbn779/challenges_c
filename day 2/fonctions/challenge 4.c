#include <stdio.h>
#include <stdlib.h>
int Maximum(int A ,int B){
    int max=A;
   if(max<B);
    max=B;


    return max;
}
int main(){
    int A,B;
    printf("Veuillez entrer deux nombres ");
    scanf("%d%d",&A,&B);
    printf("le Maximumu est %d ",Maximum (A,B));

    return 0;
}
