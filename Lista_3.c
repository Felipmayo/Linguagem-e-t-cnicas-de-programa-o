
//exerc 7 e 8

#include <stdio.h>
#include <stdlib.h>

float calc_inss (float salario){
   if(salario <= 1412.00) return salario*0.075;
   else if(salario <= 2666.68) return salario*0.09;
   else if(salario <= 4000.00) return salario*0.12;
   else return salario*0.14;
}
float calc_irpf (float salario){
   if(salario <= 2259.20) return 0;
   else if(salario <= 2826.65) return (salario*0.075)-169.44;
   else if(salario <= 3751.05) return (salario*0.15)-381.44;
   else if(salario <= 4664.68) return (salario*0.225)-662.77;
   else return (salario*0.275)-896.00;

}
int main(int argc, char *argv[]){
    float salario, desconto, irpf;
    printf("Insira o salário: ");
    scanf("%f", &salario);
    desconto = calc_inss(salario);
    irpf = calc_irpf(salario);
    printf("%f || %f", desconto, calc_inss(salario));
    printf("\nIRPF: %f", calc_irpf(salario));
 
 return 0; 
}

//exerc 7, 8 e 9

#include <stdio.h>
#include <stdlib.h>

float calc_inss (float salario){
   if(salario <= 1412.00) return salario*0.075;
   else if(salario <= 2666.68) return salario*0.09;
   else if(salario <= 4000.00) return salario*0.12;
   else return salario*0.14;
}
float calc_irpf (float salario){
   if(salario <= 2259.20) return 0;
   else if(salario <= 2826.65) return (salario*0.075)-169.44;
   else if(salario <= 3751.05) return (salario*0.15)-381.44;
   else if(salario <= 4664.68) return (salario*0.225)-662.77;
   else return (salario*0.275)-896.00;

}
int main(int argc, char *argv[]){
    float salario, inss, irpf, horas_trabalhadas, valor_hora, bruto, liquido;
    printf("Insira o salário: ");
    scanf("%f", &salario);
    inss = calc_inss(salario);
    irpf = calc_irpf(salario);
    printf("INSS: %f || %f", inss, calc_inss(salario));
    printf("\nIRPF: %f", calc_irpf(salario));

    printf("\nInsira a quantidade de horas no mes e o valor da hora: ");
    scanf("%f %f", &horas_trabalhadas, &valor_hora);
    bruto = horas_trabalhadas * valor_hora;
    liquido = salario - (calc_inss(salario) + calc_irpf(salario));

    printf("\n======================================================");
    printf("\n    RECIBO DE PAGAMENTO DE SALÁRIO (CONTRA-CHEQUE)");
    printf("\n======================================================");
    printf("\n Salário Bruto (Horas x Valor):   R$ %2.f", bruto);
    printf("\n (-) Desconto INSS:               R$   %2.f", inss);
    printf("\n (-) Desconto IRPF:               R$   %2.f", irpf);
    printf("\n------------------------------------------------------");
    printf("\n LÍQUIDO A RECEBER:               R$ %2.f", liquido);
    printf("\n======================================================");
 
 return 0; 
}
