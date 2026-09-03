#include <stdio.h>
#include <stdlib.h>
/*
tipo nome (Lista de Parametros){
    comandos
    comandos
}
*/
void exec3 (){
    float celsius, f;
    printf("\nInsira a temperatura em celsius: ");
    scanf("%f", &celsius);
  
    f = celsius * (9.0 / 5.0) + 32.0;

    printf("%f celsius vale: %f fahrenheit", celsius, f);
}
void exec2 (){
    float reais, dolar, total;
    printf("\nInsira o valor em reais: ");
    scanf("%f", &reais);
    printf("Insira cotacao do dolar: ");
    scanf("%f", &dolar);
   
    total = reais / dolar;
    printf("%.2f reais em dolar vale: %.2f dolares", reais, total);
}
void exec8(){
    int horas, minutos, segundos;
    printf("\nInsira o tempo de duração em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("O evento durou: %dh:%dm:%ds", horas, minutos, segundos);
}
int main(int argc, char *argv[]) {
    int op;
    printf("Insira qual exercicio quer resolver: [2|3|8]\n");
    scanf("%d", &op);

    switch(op){

    case 2:
    exec2();
    break;

    case 3:
    exec3();
    break; 

    case 8:
    exec8();
    break;
   }
   return 0; 
}
