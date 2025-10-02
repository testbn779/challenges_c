#include <stdio.h>

int main() {

int base,exposant,i=0,puissance=1;
    do{
    printf("Veuillez entrer une base (positive) ");
    scanf("%d",&base);
    printf("Veuillez entrer un exposant positive");
    scanf("%d",&exposant);

    }while(base<0 || exposant<0);
    while(i<exposant){
    puissance=puissance*base;
       i++;  }

    printf("la puissance est %d",puissance);


        return 0;
    }
