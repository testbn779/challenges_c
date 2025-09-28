#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c;
    float x,x1,x2,delta ;
    printf("Veullez entrer la valeur de a :");
    scanf("%f",&a);
    printf("Veullez entrer la valeur de b :");
    scanf("%f",&b);
    printf("Veullez entrer la valeur de c :");
    scanf("%f",&c);
    delta=pow(-b,2)+4*a*c;
    if(delta==0){
        x=-b/2*a;
        printf("cette equation a une seule solution : x=%f",x);
    }
    else if(delta>0){
        x1=-b-sqrt(delta)/2*a;
        x2=-b+sqrt(delta)/2*a;
        printf("cette equation a deux solutions\n x1=%.2f \n x2=%.2f");

    }
    printf("cette equation n'a pas de solution");


    return 0;
}
