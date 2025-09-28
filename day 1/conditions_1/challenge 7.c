#include <stdio.h>

int main() {
   char caractere;
   printf("Veuillez entrer un caractere ");
   scanf(" %c",&caractere);
  if(caractere>=65 && caractere<=90){
  printf("ce caractere est majscule");
  }
  else {
    printf("ce caractere n'est pas majuscule" );
  }


    return 0;
}
