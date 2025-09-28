#include <stdio.h>

int main() {
   int N,i,Factoriel=1;
   printf("Veuillez entrer un nombre ");
   scanf("%d",&N);
  if(N==0 || N==1){
    printf("le factoriel de %d est : 1");
  }
else{
    for(i=1;i<=N;i++){
    Factoriel=Factoriel*i;}
    printf("le factoriel de %d est : %d",N,Factoriel);

}
    return 0;
}
