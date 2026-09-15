#include <stdio.h>
#include <stdlib.h>

int main(){
  int A, B, C, D, aux1, aux2;
  printf("Insira os valore de A, B, C, D: ");
  scanf("%d %d %d %d", &A, &B, &C, &D);
  aux1 = A;
  aux2 = B;

  A = C;
  B = aux1;
  C = D;
  D = aux2;

  printf("%d %d %d %d", A, B, C, D);
}

float calc_vpa(float valor_patrimonial, float quantidade_acoes){
    return valor_patrimonial / quantidade_acoes;
}
float calc_pvp(float preco_atual_acao, float vpa){
    return preco_atual_acao / vpa;
}


int main(){
    float valor_patrimonial, quantidade_acoes, preco_atual_acao, pvp, vpa;
    
    printf("Insira o valor patrimonial da empresa: ");
    scanf("%f", &valor_patrimonial);
    printf("Insira a quantidade de acoes disponiveis: ");
    scanf("%f", &quantidade_acoes);
    printf("Insira o preco atual da acao: ");
    scanf("%f", &preco_atual_acao);

    vpa = calc_vpa(valor_patrimonial, quantidade_acoes);
    pvp = calc_pvp(preco_atual_acao, vpa);

    printf("============================\n");
    printf("VPA:    %f\n", vpa);
    printf("============================\n");
    printf("P/VP:   %f\n", pvp);
    printf("============================\n");
    if(pvp < 0){
        printf("Class: Pessima!");
    }
    else if(pvp >= 0 && pvp < 0.8){
        printf("Class: Otima!");
    }
    else if(pvp >= 0.8 && pvp <= 1.2){
        printf("Class: Indiferente!");
    }
    else if(pvp > 1.2 && pvp <= 2.0){
        printf("Class: Boa!");
    }
    else{
        printf("Class: Ruim!");
    }

return 0;

}
