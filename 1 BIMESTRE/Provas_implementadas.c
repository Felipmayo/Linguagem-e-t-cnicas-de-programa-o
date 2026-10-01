#include <stdio.h>
#include <stdlib.h>
//funcoes para a questao 2 da prova1:
float celsius_fahrenheit(float c) {
    return c * 1.8 + 32;
}
float fahrenheit_celsius(float f) {
    return (f - 32) / 1.8;
}
float celsius_kelvin(float c) {
    return c + 273.15;
}
float kelvin_celsius(float k) {
    return k - 273.15;
}
float metro_milha(float m) {
    return m / 1609.34;
}
float milha_metro(float mi) {
    return mi * 1609.34;
}
float kg_libra(float kg) {
    return kg * 2.205;
}
float libra_kg(float lb) {
    return lb / 2.205;
}
float kmh_mph(float kmh) {
    return kmh / 1.609;
}
float mph_kmh(float mph) {
    return mph * 1.609;
}
void prova_1(){
   int op1;
   printf("PROVA ESOFT MA\n");
   printf("Escolha a questao desejada: [0], [1], [2] \n");
   scanf("%d", &op1);

   if(op1 == 0){
    printf("QUESTAO 0\n");
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
   }else if(op1 == 1){
    printf("QUESTAO 1\n");
    int mochilas, capacidade, itens;
    printf("Digite a quantidade de itens a serem levados: ");
    scanf("%d", &itens);
    printf("Digite quantos itens cada mochila pode carregar: ");
    scanf("%d", &capacidade);

    mochilas = itens / capacidade;

    printf("Serao preenchidas %d mochilas completas", mochilas);
   }else if(op1 == 2){
    printf("QUESTAO 2\n");
    int codigo;
    float valor, resultado;
    printf("CODIGOS DAS UNIDADES:\n");
    printf("C   -> 1\n");
    printf("F   -> 2\n");
    printf("K   -> 3\n");
    printf("m   -> 4\n");
    printf("mi  -> 5\n");
    printf("kg  -> 8\n");
    printf("lb  -> 9\n");
    printf("mph -> 10\n");
    printf("km  -> 11\n\n");
    printf("Digite o codigo da unidade de entrada: ");
    scanf("%d", &codigo);
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);
    if(codigo == 1){
        resultado = celsius_fahrenheit(valor);
        printf("%.2f C = %.2f F\n", valor, resultado);
    }else if(codigo == 2){
        resultado = fahrenheit_celsius(valor);
        printf("%.2f F = %.2f C\n", valor, resultado);
    }else if(codigo == 3){
        resultado = celsius_kelvin(valor);
        printf("%.2f C = %.2f K\n", valor, resultado);
    }else if(codigo == 4){
        resultado = metro_milha(valor);
        printf("%.2f m = %.2f mi\n", valor, resultado);
    }else if(codigo == 5){
        resultado = milha_metro(valor);
        printf("%.2f mi = %.2f m\n", valor, resultado);
    }else if(codigo == 8){
        resultado = kg_libra(valor);
        printf("%.2f kg = %.2f lb\n", valor, resultado);
    }else if(codigo == 9){
        resultado = libra_kg(valor);
        printf("%.2f lb = %.2f kg\n", valor, resultado);
    }else if(codigo == 10){
        resultado = kmh_mph(valor);
        printf("%.2f km/h = %.2f mph\n", valor, resultado);
    }else if(codigo == 11){
        resultado = mph_kmh(valor);
        printf("%.2f mph = %.2f km/h\n", valor, resultado);
    }else{
        printf("Unidade de medida invalida!\n");
        }
    }else{
        printf("Questao inexistente.\n");
    }
}
void prova_2(){
    int op2;
    printf("PROVA ESOFT MB");
    printf("Escolha a questao desejada: [0], [1], [2] \n");
      scanf("%d", &op2);

    if(op2 == 0){
        printf("QUESTAO 0\n");
        int mochilas, capacidade, itens, sobra;

        printf("Digite a quantidade de itens a serem levados: ");
        scanf("%d", &itens);
        printf("Digite quantos itens cada mochila pode carregar: ");
        scanf("%d", &capacidade);

        mochilas = itens / capacidade;
        sobra = itens % capacidade;

        printf("Serao preenchidas %d mochilas completas\n", mochilas);
        printf("Sobraram %d itens\n", sobra);

    }else if(op2 == 1){
        printf("QUESTAO 1\n");
        int a, b, c;

        printf("Insira 3 numeros inteiros: \n");
        scanf("%d %d %d", &a, &b, &c);

        if(a == b || a == c || b == c){
            printf("Os numeros tem que ser distintos\n");
        }else if(a < b && b < c){
            printf("%d %d %d\n", a, b, c);
        }else if(a < c && c < b){
            printf("%d %d %d\n", a, c, b);
        }else if(b < a && a < c){
            printf("%d %d %d\n", b, a, c);
        }else if(b < c && c < a){
            printf("%d %d %d\n", b, c, a);
        }else if(c < a && a < b){
            printf("%d %d %d\n", c, a, b);
        }else{
            printf("%d %d %d\n", c, b, a);
        }
    }else if(op2 == 2){
        printf("QUESTAO 2\n");
        int codigo;
        float valor1, valor2;
        printf("CODIGOS DAS OPERACOES:\n");
        printf("Maior que (>)     -> 1\n");
        printf("Menor que (<)     -> 2\n");
        printf("Igual a (==)      -> 3\n");
        printf("Diferente de (!=) -> 4\n\n");
        printf("Digite os dois valores: ");
        scanf("%f %f", &valor1, &valor2);
        printf("Digite o codigo da operacao: ");
        scanf("%d", &codigo);

        if(codigo == 1){
            if(valor1 > valor2){
                printf("Verdadeiro\n");
            }else{
                printf("Falso\n");
            }
        }else if(codigo == 2){
            if(valor1 < valor2){
                printf("Verdadeiro\n");
            }else{
                printf("Falso\n");
            }
        }else if(codigo == 3){
            if(valor1 == valor2){
                printf("Verdadeiro\n");
            }else{
                printf("Falso\n");
            }
        }else if(codigo == 4){
            if(valor1 != valor2){
                printf("Verdadeiro\n");
            }else{
                printf("Falso\n");
            }
        }else{
            printf("operador invalido\n");
        }
    }else{
        printf("Questao inexistente.\n");
    }
}

void prova_3(){
    printf("PROVA ADSIS NA\n");
    printf("Escolha a questao desejada: [0], [1], [2] \n");
    int questao;
    printf("0 - Numeros consecutivos\n");
    printf("1 - IMC\n");
    printf("2 - Torre de Hanoi\n");
    printf("\nEscolha a questao: ");
    scanf("%d", &questao);
    if (questao == 0) {
        int n1, n2, n3, n4, n5;
        printf("QUESTAO 0\n");
        printf("Digite 5 numeros inteiros: \n");
        scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
        if (n2 == n1 + 1){
            printf("%d e %d sao consecutivos\n", n1, n2);
        }
        if (n3 == n2 + 1){
            printf("%d e %d sao consecutivos\n", n2, n3);
        }
        if (n4 == n3 + 1){
            printf("%d e %d sao consecutivos\n", n3, n4);
        }
        if (n5 == n4 + 1){
            printf("%d e %d sao consecutivos\n", n4, n5);
        }
    }else if (questao == 1) {
        float peso, altura, imc;
        printf("QUESTAO 1\n");
        printf("Digite o peso: ");
        scanf("%f", &peso);
        printf("Digite a altura: \n");
        scanf("%f", &altura);
        imc = peso / (altura * altura);
        printf("IMC: %.2f\n", imc);

        if (imc < 18.5){
            printf("Abaixo do peso\n");
        }
        else if (imc <= 24.9){
            printf("Normal\n");
        }
        else if (imc <= 29.9){
            printf("Acima do peso\n");
        }
        else{
            printf("Obeso\n");
        }
    }else if (questao == 2) {
        printf("QUESTAO 2\n");
        printf("\nMovimentos da Torre de Hanoi:\n");

        printf("Disco 1: A -> C\n");
        printf("Disco 2: A -> B\n");
        printf("Disco 1: C -> B\n");
        printf("Disco 3: A -> C\n");
        printf("Disco 1: B -> A\n");
        printf("Disco 2: B -> C\n");
        printf("Disco 1: A -> C\n");
    }
    else {
        printf("Questao invalida!\n");
    }
}
int main(){
    int op_provas;
    printf("Escolha a prova: 1- [ESOFT MA], 2- [ESOFT MB], 3- [ADSIS NA] ");
    scanf("%d", &op_provas);
    switch(op_provas){

        case 1:
        prova_1();
        break;

        case 2:
        prova_2();
        break;

        case 3:
        prova_3();
        break;
    }
}
