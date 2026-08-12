#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
    float a,b,c,d,e,f;
	
    a = 8;
    b = 19;
    c = a/b;
    d = a+b;
    e = a-b;
    f = a*b;
    
	printf("a divisao de %f / %f = %f\n", a,b,c);
	printf("a soma de %f + %f = %f\n", a,b,d);
	printf("a subtraçao de %f - %f = %f\n", a,b,e);
	printf("a multiplicacao de %f * %f = %f\n", a,b,f);
	
	return 0;
}
