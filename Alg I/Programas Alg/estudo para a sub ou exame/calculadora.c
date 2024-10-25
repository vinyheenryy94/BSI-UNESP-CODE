#include <stdio.h>

int soma(int a, int b, int *resultado){
	*resultado = a + b;
}

int main(){
	
	int a, b, resultado;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite um numero: ");
	scanf("%d", &b);
	
	
	soma(a, b, &resultado);
	
	printf("O resultado da soma eh: %d\n", resultado);
	
}
