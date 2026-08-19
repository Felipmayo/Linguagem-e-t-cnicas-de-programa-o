#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

/* 1) */

   int idade, ano;
   printf("Quantos anos voce tem? ");
   scanf("%d", &idade);
   printf("Insira o ano atual: ");
   scanf("%d", &ano);
   printf("Voce tem %d anos e nasceu em %d", idade, ano - idade);

/* 2) */

   float k, m;
   printf("\nInsira a velocidade em km/h: ");
   scanf("%f", &k);
   m = k / 3.6;
   printf("%f km/h convertido para metros por segundo fica: %f m/s", k, m);

/* 3) */

   float reais, dolar, total;
   printf("\nInsira o valor em reais: ");
   scanf("%f", &reais);
   printf("Insira cotacao do dolar: ");
   scanf("%f", &dolar);
   total = reais / dolar;
   printf("%.2f reais em dolar vale: %.2f dolares", reais, total);

/* 4) */
  
   float c, f;
   printf("Insira a temperatura em celsius: ");
   scanf("%f", &c);
  
   f = c * (9.0 / 5.0) + 32.0;

   printf("%f celsius vale: %f fahrenheit", c, f);

  return 0;
}
