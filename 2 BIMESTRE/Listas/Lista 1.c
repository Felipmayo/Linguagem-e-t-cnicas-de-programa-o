/*3) Implemente um programa que leia um número n
e mostre o seu valor em base binária (bits)*/
#include <stdio.h>

int bin (int n){
    printf("%d", n%2);
    if (n > 1) return bin(n/2);
}
int main(){
    int n, aux, mult=1;
    scanf("%d", &n);
    aux=0
    while(n>0){
        aux=aux+(n%2)*mult;
        n=n/2;
        mult=mult*10;
    }
    printf("%d", aux);
    return 0;
}
