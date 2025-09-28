struct etudiant {

  char nom[100];
  char prenom[100];

};

int main() {
  int note[100]={12,13,14};
  struct etudiant e1={"bn","prenom"};
  int i;

printf("ton nom  est %s\n",e1.nom );
printf("ton prenom est %s\n",e1.prenom );
printf("tes notes sont :\n");
for(i=0;i<3;i++){
    printf("Note %d :%d\n",i+1,note[i]);

}
  return 0;
}