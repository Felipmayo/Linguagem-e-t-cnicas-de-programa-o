#include <stdio.h>
#include <stdlib.h>

int multDigito(int dig, int valor){
        return dig*valor;
}

int main(int argc, char *argv[]){
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

   return 0; 
}
