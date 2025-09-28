#include <stdio.h>
#include <string.h>

  int main(){
    char c1[100];
    char c2[100];
    printf("Veuillez entrer la premiere chaine  ");
    scanf("%s",c1);
    printf("Veuillez entrer la deuxieme chaine  ");
    scanf("%s",c2);
    int comparaison=strcmp(c1,c2);
    if(comparaison==0){
        printf("les deux mots sont identique");

    }
    else
        printf("les deux mots ne sont pas identique");

return 0;
  }
  #include <stdio.h>
#include <string.h>

/*
int main(){

char c1[100];
char c2[100];
int different=0,i,j;
printf("veuillez entrer la premiere chaine de caractere ");
scanf("%s",c1);
printf("veuillez entrer la deuxieme chaine de caractere ");
scanf("%s",c2);
if(strlen(c1)!=strlen(c2)){
        different=1;}
else {

for(i=0;i<strlen(c1);i++){

        if(c1[i]!=c2[i])
            different=1;
}}

if(different==0)
    printf("les deux chaines sont identiques ");
else
    printf("les deux chaines ne sont pas identique");

}
*/

