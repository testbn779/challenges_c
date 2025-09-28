#include <stdio.h>
#include <stdlib.h>





   int main() {


    float Km;
    float Yards;
    printf("Veuillez entrer la distance en kilometres ");
    scanf("%f",&Km);
    Yards = Km * 1093.61;
    printf("la distance en yards est %.2f",Yards);

  return 0;
}

