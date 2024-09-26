#include <stdio.h>

int main() {
    int num;
    printf("Inserisci un numero: ");
    scanf("%d",&num);
    if(num%2==0) {
        printf("Il numero è pari");
    }
    else{printf("Il numero è dispari");}

    return 0;
}
