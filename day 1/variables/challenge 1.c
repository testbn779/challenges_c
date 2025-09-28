#include <stdio.h>
#include <stdlib.h>





   int main() {

      char nom[100];
      char prenom[100];
       char sexe;
       char email[100];

    printf("Veuillez entrer votre nom :");
    scanf("%s",nom);
    printf("Veuillez entrer votre prenom :");
    scanf("%s",prenom);
    printf("Veuillez entrer votre sexe :");
    scanf(" %c",&sexe);
    printf("Veuillez entrer votre email :");
    scanf("%s",email);
    printf("Ton nom est : %s \n",nom);
    printf("Ton prenom est : %s \n",prenom);
    printf("Ton sexe est : %c\n",sexe);
    printf("Ton eamil est %s \n",email);



  return 0;
}

