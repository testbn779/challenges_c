#include <stdio.h>
#include <stdlib.h>





   int main() {


    float a,b ;
    printf("Veuillez entrer deux nombres : \n");
    printf("Nombre 1 : ");
    scanf("%f",&a);
    printf("Nombre 2 : ");
    scanf("%f",&b);
    printf("a + b= %.2f\n",a+b);
    printf("a - b= %.2f\n",a-b);
    printf("a * b= %.2f\n",a*b);
    if(b!=0){
    printf("a / b= %.2f\n",a/b);}
    else {
        printf("la division est impossible");
    }

  return 0;
}
