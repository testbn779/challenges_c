struct personne {

  char nom[100];
  char prenom[100];
  int age ;
};

int main() {
  struct personne p1={"bn","prenom",22};



 printf("ton nom %s",p1.nom );
printf("ton prenom %s",p1.prenom );
printf("ton age %s",p1.age );
  return 0;
}