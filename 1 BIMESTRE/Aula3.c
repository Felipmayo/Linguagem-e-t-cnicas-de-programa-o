#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592



int main(int argc, char *argv[]) {

    float area, raio, r2;
    
    printf("Insira o raio do circulo: ");
    scanf("%f", &raio);
    
    r2= raio*raio;
    area = pi*r2;
    
    printf("A area do circulo de %f = %f\n", raio, area);
    
    
    printf("Agora a area do trapezio: \n");
    
        float a, B, b, h;
    
    printf("Insira a altura: ");
    scanf("%f", &h);
    
    printf("Insira a base menor: ");
    scanf("%f", &b);
    
    printf("Insira a base maior: ");
    scanf("%f", &B);
    
    a = (B+b)*h / 2;
    
    printf("A area do trapezio: %f\n", a);
    
	return 0;
}
