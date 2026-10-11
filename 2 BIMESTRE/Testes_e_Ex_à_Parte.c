/*Crie um programa em C que leia as notas de 10 alunos
O programa deverá:
A. Mostrar quais alunos foram aprovados (nota maior ou igual a 6).
B. Mostrar quais alunos foram reprovados (nota menor que 6).
C. Contar a quantidade de aprovados e reprovados.
D. Calcular a média geral da turma.
E. Encontrar a maior e a menor nota.
F. Contar quantos alunos ficaram acima da média geral da turma.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    float notas[10], total, media, maior, menor;
    int reprovados, aprovados, alunos_acima;
    printf("Insira as notas: \n");

for(int i=0; i < 10; i++){
    scanf("%f", &notas[i]);
}
reprovados = 0;
aprovados = 0;
total = 0;
for(int i=0; i < 10; i++){
    if(notas[i] >= 6.0 && notas[i] <= 10.0){
        printf("%.2f Aprovado!\n", notas[i]);
        aprovados++;
    }
    else if(notas[i] < 6.0 && notas[i] >= 0.0){
        printf("%.2f Reprovado!\n", notas[i]);
        reprovados++;
    }
    else{
        printf("Notas inválidas: (confira possiveis erros de digitação)\n");
        return 1;
    }
    total = total + notas[i];
}
    printf("%d Alunos foram Aprovados!!\n%d Alunos foram Reprovados!!\n", aprovados, reprovados);
    media = total / 10;
    printf("A media da turma ficou em %.2f pontos\n", media);

alunos_acima = 0;
for(int i=0; i < 10; i++){
    if(notas[i] > media){
        alunos_acima++;
    }
}
maior = notas[0];
menor = notas[0];
for(int i=1; i < 10; i++){
    if(notas[i] > maior){
        maior = notas[i];
    }
    if(notas[i] < menor){
        menor = notas[i];
    }
}
    printf("%d alunos ficaram acima da media da turma\n", alunos_acima);
    printf("%.2f foi a maior nota registrada da turma\n%.2f foi a menor nota registrada da turma", maior, menor);

  return 0;
}

//-----------------------------------------------------------------------------------------------------------------

/*Uma loja deseja analisar as vendas realizadas durante 7 dias. Crie um programa em C que armazene, em um vetor, o valor vendido em cada dia.
O programa deverá:
1. Ler os valores das vendas dos 7 dias.
2. Não permitir valores negativos.
3. Calcular o faturamento total da semana.
4. Calcular a média diária de vendas.
5. Identificar o maior e o menor valor de venda.
6. Informar em qual dia da semana ocorreu a maior venda (dia 1 até dia 7).
7. Contar quantos dias tiveram vendas acima da média.
8. Contar quantos dias tiveram vendas abaixo da média.
9. Informar quantos dias tiveram faturamento igual a zero.
Desafio extra: calcular qual porcentagem do faturamento semanal foi obtida no dia de maior venda.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    float vendas[7];
    float total, media, maior, menor, porcentagem;
    int acima, abaixo, zero, dia;
    printf("<<Insira o valor das vendas de cada dia>> \n");
total = 0;
media = 0;
acima = 0;
abaixo = 0;
zero = 0;
for(int i=0; i < 7; i++){
    printf("Vendas do dia: ");
    scanf("%f", &vendas[i]);
    if(vendas[i] < 0){
        printf("Valor incorreto!");
        return 0;
    }
    total = total + vendas[i];
}
media = total / 7;
for(int i=0; i < 7; i++){
    if (vendas[i] > media) {
        acima++;
    } else if (vendas[i] < media){
        abaixo++;
    }
}
menor = vendas[0];
maior = vendas[0];
dia = 1;
for(int i=1; i < 7; i++){
    if(vendas[i] > maior){
        maior = vendas[i];
        dia = i + 1;
    }
    if(vendas[i] < menor){
        menor = vendas[i];
    }
}
for(int i=0; i < 7; i++){
    if(vendas[i] == 0){
        zero++;
    }
}
    if(total > 0){
        porcentagem = (maior / total) * 100.00;
    }
    else{
        porcentagem = 0;
    }
    printf("O faturamento da semana foi: %.2f reais \n", total);
    printf("A media diaria de vendas foi: %.2f reais \n", media);
    printf("O maior valor de venda: %.2f reais \n", maior);
    printf("O menor valor de venda: %.2f reais \n", menor);
    printf("O dia de maior venda foi: %d \n", dia);
    printf("Tiveram %d dias com vendas acima da media diaria \n", acima);
    printf("Tiveram %d dias com vendas abaixo da media diaria \n", abaixo);
    printf("Dias sem faturamento: %d \n", zero);
    printf("O dia de maior venda representa %.2f%% das vendas totais", porcentagem); 
  return 0;
}

//-----------------------------------------------------------------------------------------------------------------
