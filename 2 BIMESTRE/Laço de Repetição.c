#include <stdio.h>
#include <stdlib.h>
int main(){
    int valor[10];
    int i;

    printf("Insira 10 numeros: ");

// for(inicial; condição; incremento)

    for(i=0; i<10; i++){
        scanf("%d", &valor[i]);
    }
    printf("Numeros: ");
    for(i=0; i<10; i++){
        printf("%d ", valor[i]);
    }
    printf("\n");

    return 0;
}
