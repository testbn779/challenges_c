#include <stdio.h>

int main() {
    int a, b, resultat;

    printf("Entrez le premier entier : ");
    scanf("%d", &a);

    printf("Entrez le deuxieme entier : ");
    scanf("%d", &b);

    
    if(a == b) {
        resultat = 3 * (a + b);
    } else {
        resultat = a + b;
    }

    printf("Le resultat est : %d\n", resultat);

    return 0;
}
