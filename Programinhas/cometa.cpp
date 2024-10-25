#include<stdio.h>
#define cometa 76
int main(){
	int ano;
	printf("Digite o ano: ");
	scanf("%d", &ano);
	printf("O proximo ano que o cometa ira passar eh: %d\n", ano + cometa);
	return 0;
}
