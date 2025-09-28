#include <stdio.h>

int main() {
  int annee,choix;
  int mois,jours,jour,heures,minutes,secondes;
  printf("1-convertir en Mois \n");
  printf("2-convertir en jours \n");
  printf("3-convertir en heures \n");
  printf("4-convertir en minutes \n");
  printf("5-convertir en secondes \n");
  printf("Veuillez choisir :\n");
  scanf("%d",&choix);
  printf("Veuillez entrer l'annee que vous voulez");
  scanf("%d",&annee);

  if(annee%400==0 || annee%100!=0 && annee%4==0){
        jours=366;}
  else {
    jours=365;
  }
  mois=12;
  heures=jours*24;
  minutes=heures*60;
  secondes=minutes*60;
  switch(choix){
     case 1 : printf("%d=%d",annee,mois);
              break;
     case 2 : printf("%d=%d jours",annee,jours);
              break;
     case 3 : printf("%d=%d heures",annee,heures);
              break;
     case 4 : printf("%d=%d minutes",annee,minutes);
              break;
     case 5 : printf("%d=%d secondes",annee,secondes);
              break;
     default : printf("votre choix n'existe pas");
               break;

  }




    return 0;
}