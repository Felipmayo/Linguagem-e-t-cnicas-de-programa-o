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

/*---------------------------------------------------*/

/*faça um programa que leia 10 numeros, 
mostre o maior entre os 5 primeiros
e o menor entre os restantes*/

#include <stdio.h>
#include <stdlib.h>
int compara(int a, int b){
    if(a < b) return b;
    else return a;
}
int main(){
    int valores[10];
    int maior, menor, i;

    printf("Vamos ler os valores: \n");
    //for(inicialização; verificação; incremento)
    for(i = 0; i < 10; i++){
        scanf("%d", &valores[i]);
    }
    for(i = 1, maior = valores[0]; i < 5; i+=2){
        int temp = compara(valores[i], valores[i+1]);
        maior = compara(maior, temp);
    }
    printf("\n%d", maior);


    return 0;
}
