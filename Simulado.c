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
