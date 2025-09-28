#include <stdio.h>
#include <string.h>

  int main(){
    char c[100];
    int i,count=0;
    char caractere;
    printf("Veuillez entrer une chaine de caractere ");
    scanf("%s",c);
    printf("Veuillez entrer un caractere ");
    scanf(" %c",&caractere);
    for(i=0;c[i]!='\0';i++){
        if(c[i]==caractere){
            count++;
        }
    }
    printf("le nombre d'occurence de %c est %d",caractere,count);


return 0;
  }
