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
int notas(int saque){
    int n100, n50, n10, n5, n2, n1;
    n100 = saque / 100;
    saque = saque % 100;

    n50 = saque / 50;
    saque = saque % 50;

    n10 = saque / 10;
    saque = saque % 10;

    n5 = saque / 5;
    saque = saque % 5;

    n2 = saque / 2;
    saque = saque % 2;

    n1 = saque / 1;

    printf("\nQuantidade de notas necessarias:\n");
    printf("\n%d notas: 100\n%d notas: 50\n%d notas: 10\n%d notas: 5\n%d notas: 2\n%d notas: 1\n", n100, n50, n10, n5, n2, n1);
 
}
int main(int argc, char *argv[]){
    printf("\n--------------------------------------------------------------------");
    printf("\nEXERCICIO 5\n");

    int saque;
    printf("\nValor que deseja sacar: ");
    scanf("%d", &saque);
    if(saque > 0){
        notas(saque);
    }
    else{
        printf("Saque invalido!!!");
    }
    
    printf("\n--------------------------------------------------------------------");
    printf("\nEXERCICIO 7,8,9\n");

    float salario, inss, irpf, horas_trabalhadas, valor_hora, bruto, liquido;
    printf("\nInsira o salário: ");
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
