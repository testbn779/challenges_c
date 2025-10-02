#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ANIMAUX 200

typedef struct {
    int id;
    char nom[50];
    char espece[50];
    int age;
    char habitat[50];
    float poids;
} Animal;

Animal T[MAX_ANIMAUX];
int nbr_animal=0;
int id=0;
void initialiser() {
    T[nbr_animal++] = (Animal){++id,"Simba","Lion",5,"Savane",190.5};
    T[nbr_animal++] = (Animal){++id,"Nala","Lion",4,"Savane",130.2};
    T[nbr_animal++] = (Animal){++id,"Scar","Lion",12,"Savane",200.0};
    T[nbr_animal++] = (Animal){++id,"Sherkhan","Tigre",8,"Jungle",220.0};
    T[nbr_animal++] = (Animal){++id,"Khan","Tigre",6,"Jungle",210.0};
    T[nbr_animal++] = (Animal){++id,"Melman","Girafe",7,"Savane",800.0};
    T[nbr_animal++] = (Animal){++id,"Geoffrey","Girafe",10,"Savane",820.0};
    T[nbr_animal++] = (Animal){++id,"Dumbo","Elephant",25,"Savane",3200.0};
    T[nbr_animal++] = (Animal){++id,"Babar","Elephant",30,"Savane",3300.0};
    T[nbr_animal++] = (Animal){++id,"Perry","Pingouin",3,"Aquatique",15.0};
    T[nbr_animal++] = (Animal){++id,"Polly","Perroquet",2,"Jungle",0.9};
    T[nbr_animal++] = (Animal){++id,"Rex","Crocodile",18,"Marécage",500.0};
    T[nbr_animal++] = (Animal){++id,"Blue","Dauphin",9,"Aquatique",150.0};
    T[nbr_animal++] = (Animal){++id,"Tito","Zebre",4,"Savane",350.0};
    T[nbr_animal++] = (Animal){++id,"Hanna","Hyène",5,"Savane",70.0};
    T[nbr_animal++] = (Animal){++id,"Mona","Chimpanze",6,"Jungle",45.0};
    T[nbr_animal++] = (Animal){++id,"Kiko","Kangourou",7,"Désert",85.0};
    T[nbr_animal++] = (Animal){++id,"Rafa","Tortue",80,"Aquatique",200.0};
    T[nbr_animal++] = (Animal){++id,"Vera","Serpent",2,"Jungle",4.5};
    T[nbr_animal++] = (Animal){++id,"Maggie","Ours",12,"Forêt",450.0};
}

void Ajouter(){

    int choix,nbr;
    printf("\n======SOUS MENU ======\n");
    printf("1. choix simple (Ajouter un seul animal) \n");
    printf("2. choix multiple (Ajouter plusieurs animals)\n");
    printf("==================\n");
    printf("Choix:");
    scanf("%d",&choix);
     if (nbr_animal >= MAX_ANIMAUX){
        printf("La liste est pleine !!!\n");
        return;}

    switch(choix){
    case 1: T[nbr_animal].id=++id;
            printf("Nom :");
            scanf("%s",T[nbr_animal].nom);
            printf("espece :");
            scanf("%s",T[nbr_animal].espece);
            printf("Age :");
            scanf("%d",&T[nbr_animal].age);
            printf("Hbitat :");
            scanf("%s",T[nbr_animal].habitat);
            printf("Poid :");
            scanf("%f",&T[nbr_animal].poids);
            nbr_animal++;
            break;
    case 2: printf("veuillez choisir le nombre d'animaux que vous voulez ajouter :");
            scanf("%d",&nbr);
            for(int i=0;i<nbr;i++){
                T[nbr_animal].id=++id;
                printf("Animal %d:\n",i+1);
                printf("Nom :");
                scanf("%s",T[nbr_animal].nom);
                printf("espece :");
                scanf("%s",T[nbr_animal].espece);
                printf("Age :");
                scanf("%d",&T[nbr_animal].age);
                printf("Habitat :");
                scanf("%s",T[nbr_animal].habitat);
                printf("Poid :");
                scanf("%f",&T[nbr_animal].poids);
                nbr_animal++;}
                 break;
    default :   printf("votre choix est invalide !!");
                break;
                }}

void tri_par_age() {
    int i, j, min;
    Animal temp;

    for (i = 0; i < nbr_animal - 1; i++) {
        min = i;
        for (j = i + 1; j < nbr_animal; j++) {
            if (T[j].age <T[min].age ) {
                min = j;
            }
        }
        if (min != i) {
            temp = T[i];
            T[i] = T[min];
            T[min] = temp;
        }
    }
}
void tri_par_nom() {
    int i, j, min;
    Animal temp;

    for (i = 0; i < nbr_animal - 1; i++) {
        min = i;
        for (j = i + 1; j < nbr_animal; j++) {
            if (strcmp(T[j].nom, T[min].nom) < 0) {
                min = j;
            }
        }
        if (min != i) {
            temp = T[i];
            T[i] = T[min];
            T[min] = temp;
        }
    }
}

 void Afficher(){
    int choix,i;
    char habitat[50];
    printf("\n======SOUS MENU  ======\n");
    printf("1. Afficher la liste complète \n");
    printf("2. Trier par nom\n");
    printf("3. Trier par âge\n");
    printf("4. Afficher uniquement les animaux d’un habitat spécifique\n");
    printf("==================\n");
    printf("Veuillez choisir un nombre :");
    scanf("%d",&choix);
    switch(choix){
    case 1:if (nbr_animal == 0) {
           printf("Il n'y a pas de contact.\n");}
           for(int i=0;i<nbr_animal;i++){
           printf("Animal %d :\n",i+1);
           printf("Id : %d |",T[i].id);
           printf("Nom : %s |",T[i].nom);
           printf("Espece: %s |",T[i].espece);
           printf("Age : %d |",T[i].age);
           printf("Hbitat : %s |",T[i].habitat);
           printf("Poids : %f\n",T[i].poids);}
           break;
    case 2: tri_par_nom();
            for(int i=0; i<nbr_animal; i++){
            printf("Animal %d :\n", i+1);
            printf("Id : %d | Nom : %s | Espece: %s | Age : %d | Hbitat : %s | Poids : %f\n",
            T[i].id, T[i].nom, T[i].espece, T[i].age, T[i].habitat, T[i].poids);
                                         }
            break;
    case 3: tri_par_age();
            for(int i=0; i<nbr_animal; i++){
            printf("Animal %d :\n", i+1);
            printf("Id : %d | Nom : %s | Espece: %s | Age : %d | Hbitat : %s | Poids : %f\n",
            T[i].id, T[i].nom, T[i].espece, T[i].age, T[i].habitat, T[i].poids);
                                            }
            break;
    case 4:printf("Veuillez entrer un habitat\n");
           scanf("%s",habitat);
           for(i=0;i<nbr_animal;i++){
            if(strcmp(T[i].habitat,habitat)==0){
                printf("Animal %d:\n",i+1);
                printf("id: %d |",T[i].id);
                printf("Nom : %s |",T[i].nom);
                printf("Espece: %s |",T[i].espece);
                printf("Age : %d |",T[i].age);
                printf("Hbitat : %s |",T[i].habitat);
                printf("Poids : %f\n",T[i].poids);
           }
           }



                              }
                              }


void Modifier(){
  int choix ,age;
  int id,i,trouve=0;
  char habitat[50];
      printf("\n======SOUS MENU ======\n");
      printf("1. Modifier l’habitat d’un animal \n");
      printf("2. Modifier l’âge\n");
      printf("==================\n");
      printf("Choix :");
      scanf("%d",&choix);
      printf("Veuillez entrer ld de l'animal : ");
      scanf("%d",&id);
      if(choix==1){
      for (i = 0; i < nbr_animal; i++) {
        if (T[i].id == id) {
            printf("L'animal est trouve !! \n");
            printf("Veuillez entrer la nouvelles valeur : \n");
            printf("Habitat: ");
            scanf("%s", habitat);
            strcpy(T[i].habitat, habitat);
            printf("l'habitat modifie avec succes !\n");
            trouve = 1;
            break;}
                    }}

            else if(choix==2){
      for (i = 0; i < nbr_animal; i++) {
        if (T[i].id == id) {
            printf("L'animal est trouve !! \n");
            printf("Veuillez entrer la nouvelle valeur : \n");
            printf("Age: ");
            scanf("%d", &age);
            T[i].age=age;
            printf("l'age d'animal modifier avec succes !\n");
            trouve = 1;
            break;}


            }
            if (trouve==0) {
             printf("L'animal n'existe pas  !!\n");
                }


      }
}



void Supprimer() {
    int id,i,j;
    printf("ID de l'animal a supprimer: ");
    scanf("%d", &id);

    for (i = 0; i < nbr_animal; i++) {
        if (T[i].id == id) {
            for (j = i; j < nbr_animal-1; j++) {
                T[j] = T[j+1];
            }
            nbr_animal--;
            printf("L'animal supprime avec succes \n");
            return;
        }
    }
    printf("L'animal n'existe pas !!\n");
}



void Rechercher(void) {

}


void Statistique() {
      int choix;
      printf("\n======SOUS MENU ======\n");
      printf("1. Nombre total d’animaux dans le zoo \n");
      printf("2. Âge moyen des animaux\n");
      printf("3. Plus vieux et plus jeune animal");
      printf("4. Afficher les espèces les plus représentées");
      printf("==================\n");
      printf("choix : ");
      scanf("%d",&choix);
    if (nbr_animal == 0) {
        printf("Aucun animal.\n");
        return;
    }

    int somme = 0;
    int  min = T[0].age;
    int max = T[0].age;
    for (int i = 0; i < nbr_animal; i++) {
        somme = somme+T[i].age;
        if (T[i].age < min)
              min = T[i].age;
        if (T[i].age > max)
              max = T[i].age;
    }
    switch(choix){
       case 1: printf("Nombre: %d\n", nbr_animal);
               break;
       case 2: printf("Age moyen: %.2f\n", (float)somme/nbr_animal);
               break;
       case 3: printf("Plus jeune: %d ans | Plus vieux: %d ans\n", min, max);
               break;
       case 4:
      default: printf("choix invalid !!");
               break;

       }
}

int main(void) {
     initialiser();
    char reponse;
    int choix;

    do {
        printf("\n====== MENU ======\n");
        printf("1. Ajouter un animal \n");
        printf("2. Afficher les animaux\n");
        printf("3. Modifier un animal\n");
        printf("4. Supprimer un animal\n");
        printf("5. Rechercher un animal \n");
        printf("6. Statistiques\n");
        printf("==================\n");
        printf("Veuillez choisir un nombre : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: Ajouter(); break;
            case 2: Afficher(); break;
            case 3: Modifier(); break;
            case 4: Supprimer(); break;
            case 5: Rechercher(); break;
            case 6: Statistique(); break;
            default: printf("Choix invalide !\n");
        }

        printf("Vous souhaitez revenir au Menu ? (Y/N) : ");
        scanf(" %c", &reponse);

    } while (reponse != 'N' && reponse != 'n');

    printf("Au revoir !\n");
    return 0;
}

