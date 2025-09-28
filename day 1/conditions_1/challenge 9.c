#include <stdio.h>

int main() {
   char caractere;
   printf("Veuillez entrer un caractere ");
   scanf(" %c",&caractere);
  if(caractere>=65 && caractere<=90){
  printf("ce caractere est majscule");
  }
  else if(caractere>=97 && caractere<=122){
    printf("ce caractere est miniscule" );
  }
   else {
    printf("ce caractere n'est pas un alphabet");
   }

    return 0;
}