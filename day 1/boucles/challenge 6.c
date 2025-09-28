#include <stdio.h>

int main() {
 int i,n;
 printf("Veuillez entrer un nombre");
 scanf("%d",&n);
 printf("les premiers %d nombres pair sont :",n);
  for(i=1;i<=n;i++){
    printf("%d ",2*i);
    if(i<n){
        printf(",");
    }
  }
    return 0;
}

