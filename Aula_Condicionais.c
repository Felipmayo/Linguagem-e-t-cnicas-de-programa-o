/* 1 --> verdadeiro
   0 --> falso
   = --> recebe
   == --> igual */

// CONDICIONAIS, if, else, else if

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b, c, r;

    printf("Entre com os valores para A B C: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        r = a;
    }
    else{
        r = b;
    }
    if(c>r){
        r = c;
    }
    printf("%d eh o maior", r);

//Informe se o número par ou ímpar
    int numero;
    printf("\nInsira um numero: ");
    scanf("%d", &numero);
    
    if(numero%2 == 0){
        printf("O numero %d eh par", numero);
    }
    else{
        printf("O numero %d eh impar", numero);
    }
    return 0;
}
