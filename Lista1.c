#include <stdio.h>
#include <stdlib.h>

/* 1) */

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
	
/* 2) */

    double num;
	
	printf("\nInsira o numero: ");
	scanf("%lf", &num);
	
	printf("a notacao cientifica do numero %lf: %e", num, num);	
	
/* 3) */	
	return 0;
}
