/* treinando uma soma com funçao de parametro por referencia*/

#include <stdio.h>

int soma(int a, int b, int *resultado){
	*resultado = a + b;
}

int main (){
	
	int a, b;
	
	printf("Digite um valor: ");
	scanf("%d", &a);
	printf("Digite um valor: ");
	scanf("%d", &b);
	
	int resultado;
	soma(a, b, &resultado);
	printf("O resultado eh: %d\n");
	
}
