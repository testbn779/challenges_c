#include <stdio.h>
#include <string.h>

  int main(){
    char c[100];
    int i,count=0;
printf("Veuillez entrer une chaine ");
scanf("%s",c);
for(i=0;c[i]!='\0';i++){
    count++;
}
printf("la longueur de cette chaine est %d",count);

return 0;
  }