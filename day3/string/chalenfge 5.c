#include <stdio.h>
#include <string.h>

  int main(){
    char c1[100];
    char c2[100];
    int i;
    printf("Veuillez entrer la premiere chaine  ");
    scanf("%s",c1);
    printf("Veuillez entrer la deuxieme chaine  ");
    scanf("%s",c2);

     int a= strcspn(c1,"\n");
     c1[a]='\0';
     printf("%s",c1);
     printf("%s",c2);
     /*for(i=0;c1[i]!='\0';i++){
        printf("%c",c1[i]);
     }
       for(i=0;c2[i]!='\0';i++){
        printf("%c",c2[i]);
     }*/
return 0;
  }