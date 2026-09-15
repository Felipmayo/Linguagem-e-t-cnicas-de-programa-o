#include <stdio.h>
#include <stdlib.h>

void exerc_1(){
int multDigito(int dig, int valor){
        return dig*valor;
}
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, dgv1, dgv2, soma, resto, resto2;
    printf("Insira o CPF: (x x x . x x x . x x x - x x) ");
    scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", 
           &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &dgv1, &dgv2);
    printf("CPF:\n%d%d%d.%d%d%d.%d%d%d-%d%d", 
           num1, num2, num3, num4, num5, num6, num7, num8, num9, dgv1, dgv2);
    soma = multDigito(num1,10)+multDigito(num2,9)+multDigito(num3,8)+multDigito(num4,7)
           +multDigito(num5,6)+multDigito(num6,5)+multDigito(num7,4)+multDigito(num8,3)
           +multDigito(num9,2);
    soma *= 10;
    resto = soma%11;
    if (resto == 10) resto = 0;
    printf("\n%d", resto);
    
    soma = multDigito(num1,11)+multDigito(num2,10)+multDigito(num3,9)+multDigito(num4,8)
           +multDigito(num5,7)+multDigito(num6,6)+multDigito(num7,5)+multDigito(num8,4)
           +multDigito(num9,3)+multDigito(dgv1,2);
    soma *= 10;
    resto2 = soma%11;
    if (resto2 == 10) resto = 0;
    printf("\n%d", resto2);

    if (resto == dgv1 && resto2 == dgv2){
        printf("\nCPF válido");
    }
    else{
        printf("\nCPF inválido");
    }
}
void exerc_2(){
    float calc_F (float temp){
    return  (temp * 9/5) + 32;
}
float calc_C (float temp){
    return  (temp - 32) * 5/9;
}
    float temp, grandeza;
    printf("\nInsira a grandeza (1- Fahrenheit OU 2- Celsius): ");
    scanf("%f", &grandeza);
    printf("\nInsira o valor da temperatura: ");
    scanf("%f", &temp);

    if (grandeza == 2){
        printf("\nA temperatura de %f Celsius eh %f Fahrenheit", temp, calc_F(temp));
    }
    else if (grandeza == 1){
        printf("\nA temperatura de %f Fahrenheit eh %f Celsius", temp, calc_C(temp));
    }
    else{
        printf("\nGrandeza invalida");
    }
}

void exerc_3(){
    float calc_notas(float nota_1, float nota_2, float nota_3){
    return (nota_1 + nota_2 + nota_3) / 3;
}
    float nota_1, nota_2, nota_3, resto;
    printf("Insira as tres notas: ");
    scanf("%f %f %f", &nota_1, &nota_2, &nota_3);

    if(calc_notas(nota_1, nota_2, nota_3) >= 70 && calc_notas(nota_1, nota_2, nota_3) <=100 ){
        printf("Aprovado!");
    }
    else if(calc_notas(nota_1, nota_2, nota_3) < 70 && calc_notas(nota_1, nota_2, nota_3) >= 40){
        resto = 100 - calc_notas(nota_1, nota_2, nota_3);
        printf("Exame!\nFaltam %f pontos", resto);
    }
    else if(calc_notas(nota_1, nota_2, nota_3) < 40){
        printf("Reprovado!");
    }
    else{
        printf("Notas invalidas!");
    }
}

int main(int argc, char *argv[]){
    int op;
    printf("Qual exercicio pretende fazer? [1,2 ou 3] ");
    scanf("%d", &op);

    switch(op){
        case 1:
            exerc_1();
            break;

        case 2:
            exerc_2();
            break;
        
        case 3:
            exerc_3();
            break;
    }
    return 0;
} 
