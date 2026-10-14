#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int valor[10], i, cont;

    for(i=0; i<10; i++){
        scanf("%d", &valor[i]);
    }
    printf("Acabou o for\n");
    printf("Iniciando o while\n");
    i = 0;
    while(i<10){
        scanf("%d", &valor[i]);
        i++;
    }

    /* Leia um valor par e mostre sua raiz*/
    /*
    printf("Insira um valor par: ");
    scanf("%d", &valor);
    while (valor%2 == 1){
        printf("Valor inserido impar,\ninsira um novo valor: ");
        scanf("%d", &valor);
    }
    do{
        printf("Insira um valor par: ");
        scanf("%d", &valor);
    }while (valor%2 == 1);
        
    printf("a raiz de %d = %f", valor, sqrt(valor));
    
    return 0;*/
}

//==========================================================================

#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que peça ao usuário para
digitar 10 números que sejam inteiros positivos,
e ignore os negativos.E mostre na tela o resultado
da soma e a média desses valores.
--> OBS: não precisa usar vetor, usem os laços da aula de hoje
        while e do-while*/
int main(){
    int i;
    float soma, media, num;
    i = 0;
    soma = 0;
    while(i < 10){
        scanf("%f", &num);
        if(num >= 0){
            soma += num;
            i++;
        }
        if(num < 0){
        return 0;
        }
    }
    printf("Soma = %.3f e media = %.3f", soma, (soma/10));
}
