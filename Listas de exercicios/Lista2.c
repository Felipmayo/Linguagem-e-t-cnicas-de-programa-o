#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

/* 1) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual. */

   int idade, ano;
   printf("Quantos anos voce tem? ");
   scanf("%d", &idade);
   printf("Insira o ano atual: ");
   scanf("%d", &ano);
   
   printf("Voce tem %d anos e nasceu em %d", idade, ano - idade);

/* 2) Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo).
A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s. */

   float k, m;
   printf("\nInsira a velocidade em km/h: ");
   scanf("%f", &k);
   
   m = k / 3.6;
   printf("%f km/h convertido para metros por segundo fica: %f m/s", k, m);

/* 3) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares. */

   float reais, dolar, total;
   printf("\nInsira o valor em reais: ");
   scanf("%f", &reais);
   printf("Insira cotacao do dolar: ");
   scanf("%f", &dolar);
   
   total = reais / dolar;
   printf("%.2f reais em dolar vale: %.2f dolares", reais, total);

/* 4) Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. */
  
   float celsius, f;
   printf("\nInsira a temperatura em celsius: ");
   scanf("%f", &celsius);
  
   f = celsius * (9.0 / 5.0) + 32.0;

   printf("%f celsius vale: %f fahrenheit", celsius, f);

/* 5) Leia um ângulo em graus e apresente-o convertido em radianos.
A fórmula de conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos e p = 3.141592. */

   float G, R, pi;
   pi = 3.141592;

   printf("\nInsira o angulo em graus: ");
   scanf("%f", &G);
   
   R = G * pi / 180;

   printf("O angulo de %f graus vale %f em radianos", G, R);

/* 6) Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor. */

   int inteiro;
   printf("\nInsira o numero: ");
   scanf("%d", &inteiro);
  
   printf("O sucessor de %d vale: %d", inteiro, inteiro + 1);
   printf("\nO antecessor de %d vale: %d", inteiro, inteiro - 1);

/* 7) A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
O primeiro receberá 46% do total. O segundo receberá 32% do total. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores. */

   float ganhador, segundo, terceiro;
   ganhador = 780000*0.46;
   segundo = 780000*0.32;
   terceiro = 780000 - (ganhador + segundo);

   printf("\nO vecedor do concurso ganhou: %.2f reais", ganhador);
   printf("\nO segundo ganhou: %.2f reais", segundo);
   printf("\nO terceiro ganhou: %.2f reais", terceiro);

/* 8) Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, 
e informe-o expresso no formato horas:minutos:segundos. */

   int horas, minutos, segundos;
   printf("\nInsira o tempo de duração em segundos: ");
   scanf("%d", &segundos);

   horas = segundos / 3600;
   segundos = segundos % 3600;
   minutos = segundos / 60;
   segundos = segundos % 60;

   printf("O evento durou: %dh:%dm:%ds", horas, minutos, segundos);

/* 9) Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L.
Para isso, ele gostaria que você o auxiliasse através de um simples programa.
Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas)e a velocidade média durante a mesma (em km/h).
Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto. */

   float velocidade, duracao, gasolina, distancia;
   printf("\nInsira quato tempo durou a viagem em horas: ");
   scanf("%f", &duracao);
   printf("Insira a velocidade media durante a viagem em Km/h: ");
   scanf("%f", &velocidade);
   
   distancia = velocidade * duracao;
   gasolina = distancia / 12;
   printf("Para percorrer a distancia de %.2f Km, vai precisar de %.2f litros de gasolina", distancia, gasolina);
   
/* 10.1 Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior” */

   int a, b, c, maior, maior_temp;
   printf("\nInforme os valores a serem comparados: ");
   scanf("%d %d %d", &a, &b, &c);

   //conta
   maior_temp = (a+b+abs(a-b))/2;
   maior = (maior_temp+c+abs(maior_temp-c))/2;
   printf("O maior entre |%d||%d||%d| = %d eh o maior", a, b, c, maior);

/* 10.2 Faça um programa que leia quatro valores e apresente o maior dos três valores lidos. */

   int a1, b1, c1, d1, maior_temp2, maior_temp1, maior1;
   printf("\nInforme os valores a serem comparados: ");
   scanf("%d %d %d %d", &a1, &b1, &c1, &d1);

   //conta 2
   maior_temp1 = (a1+b1+abs(a1-b1))/2;
   maior_temp2 = (maior_temp1+c1+abs(maior_temp1-c1))/2;
   maior1 = (maior_temp2+d1+abs(maior_temp2-d1))/2;
   printf("O maior entre |%d||%d||%d||%d| = %d", a1, b1, c1, d1, maior1);

  return 0;
}
