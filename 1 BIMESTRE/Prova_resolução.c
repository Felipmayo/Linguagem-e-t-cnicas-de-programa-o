#include <stdio.h>
#include <stdlib.h>
int main(){
//0) Impares e multiplos de 5:
   int num1, num2, num3, num4;
   printf("Insira 4 numeros inteiros: \n");
   scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
   if(num1 % 2 != 0){
    printf("%d eh um numero impar\n", num1);
   }
   if(num2 % 2 != 0){
    printf("%d eh um numero impar\n", num2);
   }
   if(num3 % 2 != 0){
    printf("%d eh um numero impar\n", num3);
   }
   if(num4 % 2 != 0){
    printf("%d eh um numero impar\n", num4);
   }
   if(num1 % 5 == 0){
    printf("%d eh multiplo de 5\n", num1);
   }
   if(num2 % 5 == 0){
    printf("%d eh multiplo de 5\n", num2);
   }
   if(num3 % 5 == 0){
    printf("%d eh multiplo de 5\n", num3);
   }
   if(num4 % 5 == 0){
    printf("%d eh multiplo de 5\n", num4);
   }

//1)Legendarios e seus problemas com mochilas:
   int mochilas, capacidade, itens;
   printf("Digite a quantidade de itens a serem levados: ");
   scanf("%d", &itens);
   printf("Digite quantos itens cada mochila pode carregar: ");
   scanf("%d", &capacidade);

   mochilas = itens / capacidade;

   printf("Serao preenchidas %d mochilas completas", mochilas);
 
 return 0;
}
