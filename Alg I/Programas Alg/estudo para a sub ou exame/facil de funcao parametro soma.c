#include<stdio.h>

int soma(int n1, int n2, int *resultado){
	*resultado = n1 + n2;
}

int main(){
	
	int n1, n2;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite um numero: ");
	scanf("%d", &n2);
	
	int resultado;
	soma(n1, n2, &resultado);
	printf("O resultado da soma eh: %d\n ", resultado);
	
	return 0;
}
