#include <stdio.h>
int main(){
    int i, j, k, n, r;

    //vamos relembrar algumas estruturas que vimos essa semana
    /*Laço for repete um conjunto de instruções, de um valor
    inicial (inicialização), até uma determinada condição
    realizando uma operação (incremento) a cada execução[sempre]*/

    for(i=0, j=1; i<10; i++, j--){
        printf("Esse é o laco FOR\n");
    }

    /*Laço WHILE(enquanto), que testa se uma condição é verdadeira,
    caso seja executa um bloco de comandos repetindo o processo
    enquanto a condição for avaliada verdadeira*/

    while(i<10){
        printf("%d, laco WHILE\n", i);
        if(n%2 == 0) i++;
        n++;
    }

    /* Laço DO WHILE, semelhante ao Laço while, porém antes de
    realizar a verificação ele executa o conjunto de instruções pra 
    após a execução realizar a verificação da condição*/

    do{
        printf("%d, laco DO", i);
        if(n%2 == 0) i++;
        n++;
    } while (i<10);

  return 0;
}

    //Exercicio 1;
    /*Elabore um programa que permita a entrada de 3 valores.]
    E conte do primeiro valor inserido, até o segundo valor, com o
    passo da contagem dado pelo terceiro valor*/
    //ex: 1,8,2 >> contar de 1 a 8, com passo 2 = 3,5,7.

#include <stdio.h>
int main(){
    int ini, fim, passo;
    printf("Entre com o valor inicial, final, e passo:\n");
    scanf("%d %d %d", &ini, &fim, &passo);
    printf("SEQUENCIA:\n");
    if(ini<fim){
        while(ini<fim){
            printf("|%d|", ini);
            ini += passo;
        }
    }else{
        while(ini>fim){
            printf("|%d|", ini);
            ini -= passo;
        }
    }
   return 0;
}

   //Exercicio 2;
   /*Faça um programa que receba um numero n a soma dos 
   n primeiros termos de sequencia definida
   [S = 1/2; 1/4; 1/8; 1/16... N*/




    //Exercicio 3;
    /*Crie um programa que exiba na tela, o triangulo de pascal.*/
