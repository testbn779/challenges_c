#include <stdio.h>
int Factoriel(int N){
    int Factoriel =1;
  if(N==1 || N==0){
    return Factoriel;
  }
  else{
    for(int i=1;i<=N;i++)
    Factoriel=Factoriel*i;
    return Factoriel;
  }}
  int main(){
    int n;
printf("Veuillez entrer un nombre ");
scanf("%d",&n);
printf("le factoriel est %d",Factoriel( n));

return 0;
  }
