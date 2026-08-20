#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 1) Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos. */

int main(int argc, char *argv[]) {
	
	int primeiro, segundo, aux;
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &primeiro);
	
	printf("Insira o segundo valor: ");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf("%d \n%d", primeiro, segundo);
	
/* 2) Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica. */

    double num;
	
	printf("\nInsira o numero: ");
	scanf("%lf", &num);
	
	printf("a notacao cientifica do numero %lf: %e", num, num);	
	
/* 3) Implemente um programa que leia um número n [com n positivo & n <= 64] e mostre na tela o seu valor em base binária (bits). */

    int bit1, bit2, bit3, bit4, bit5, bit6, bit7, bitx, n;
      printf("\nInsira o valor para ser convertido: ");
      scanf("%d", &bitx);
	
     n = bitx;
	
     bit7 = bitx %2;
     bitx /= 2;

     bit6 = bitx %2;
     bitx /= 2;

     bit5 = bitx %2;
     bitx /= 2;

     bit4 = bitx %2;
     bitx /= 2;

     bit3 = bitx %2;
     bitx /= 2;

     bit2 = bitx %2;
     bitx /= 2;

     bit1 = bitx %2;
     bitx /= 2;

    printf("O numero %d em binario: %d%d%d%d%d%d%d", n, bit1, bit2, bit3, bit4, bit5, bit6, bit7);
    
/* 4) Faça um programa que leia o salário fixo e o valor total em vendas de um vendedor.
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, mostre o total a receber no final do mês, 
com duas casas decimais. */

float salario, vendas, total;
   printf("\nInsira o salario: ");
   scanf("%f", &salario);

   printf("Insira as vendas efetuadas: ");
   scanf("%f", &vendas);

 total = (vendas * 0.15) + salario;

   printf("O total a ser recebido: %.2f", total);

/* 5) Elabore um programa que peça ao usuário para digitar 4 valores. E mostre na tela a soma, a média e o produtório desses valores. */

float num1, num2, num3, num4;
   printf("\nInsira o primeiro numero: ");
   scanf("%f", &num1);

   printf("Insira o segundo numero: ");
   scanf("%f", &num2);

   printf("Insira o terceira numero: ");
   scanf("%f", &num3);

   printf("Insira o quarto numero: ");
   scanf("%f", &num4);

   printf("A soma desses numeros: %f", num1 + num2 + num3 + num4);

   printf("\nA media desses numeros: %f", (num1 + num2 + num3 + num4) / 4);

   printf("\nO produtorio desses valores: %f", num1 * num2 * num3 * num4);

/* 6) Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias. */

int diasvividos, anos, meses, dias;
  printf("\nInsira quantos dias voce tem de vida: ");
  scanf("%d", &diasvividos);

  anos = diasvividos / 365;
  diasvividos = diasvividos %365;
  meses = diasvividos / 30;
  diasvividos = diasvividos %30;

  printf("voce tem: %d anos, %d meses e %d dias de vida", anos, meses, diasvividos);

/* 7) Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R).
A fórmula para calcular o volume é: (4/3) * pi * R³. Considere (atribua) para pi o valor 3.14159. */

float r, volume, pi;
  pi = 3.14159;
  printf("\nInsira o valor do raio da esfera: ");
  scanf("%f", &r);

  volume = (4 / 3.0) * pi * r * r * r;
  printf("O volume da esfera vale: %f", volume);

/* 8) Leia os quatro valores do usuário correspondentes às coordenadas em um plano cartesiano, p1(x1,y1) e p2(x2,y2)
e calcule e mostre a distância entre eles, aplicando a distância euclidiana, segundo a fórmula: d = √((x₂ − x₁)² + (y₂ − y₁)²) */

double x1, y1, x2, y2, d;
   printf("\nInsira o x1: ");
   scanf("%lf", &x1);
	
   printf("Insira o y1: ");
   scanf("%lf", &y1);
	
   printf("Insira o x2: ");
   scanf("%lf", &x2);
	
   printf("Insira o y2: ");
   scanf("%lf", &y2);

   d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

   printf("A distancia euclidiana vale: %lf", d);
	
	return 0;
}
