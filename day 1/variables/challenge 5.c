#include <stdio.h>
#include <stdlib.h>





   int main() {


    int c;
    printf("Veuillez entrer la temperature en Celsius");
    scanf("%d",&c);
    if(c<0){
        printf("Solide");

    }
    else if(c>=0 && c<100)
    printf("liquide");
    else
    printf("Gaz");

  return 0;
}