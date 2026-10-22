#include <stdio.h>
#include <string.h>
/*Faça um programa que leia uma palavra,
e verifique se ela é um palindromo

Entrada: ABBA
Saída: é um palindromo

Um palindromo é uma palavra, frase ou número que pode 
ser lido da direita para esquerda,
mantendo o mesmo sentido*/
int main(){
    char palavra[30];
    int i, j, palindromo;
    scanf("%s", &palavra);
    printf("Inserido: %s\n", palavra);
    for(i=0; i<30 && palavra[i] != '\0'; i++);
    for(j=i-1, i=0; i<j; i++, j--){
        if(palavra[i] == palavra[j]) palindromo = 1;
        else palindromo = 0;
    }
    if(palindromo) printf("Eh palindromo");
    else printf("Nao eh palindromo");
    
    return 0;
}
