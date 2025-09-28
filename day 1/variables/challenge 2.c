#include <stdio.h>
#include <stdlib.h>





   int main() {


    float C;
    float K;
    printf("Veuillez entrer  une temperature en Celsius:");
    scanf("%f",&C);
    K = C + 273.15;
    printf("la temperature en Kelvin est : %.2f",K);

  return 0;
}