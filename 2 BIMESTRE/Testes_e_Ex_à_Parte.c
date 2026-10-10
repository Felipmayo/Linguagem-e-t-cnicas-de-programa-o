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
