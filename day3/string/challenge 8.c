#include <stdio.h>
#include <string.h>


int main(){

char c[100];
int i;
printf("veuillez entrer une chaine de caractere ");
scanf("%s",c);
for(i=0;i<=strlen(c);i++){
if(c[i]>=65 && c[i]<=90)
    printf("%c",c[i]+32 );
else

    printf("%c",c[i]);}

return 0;}