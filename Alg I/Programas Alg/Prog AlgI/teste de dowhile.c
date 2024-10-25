#include <stdio.h>

int main(){
	
	int a, b, parada, soma;
	
	do{
	
		scanf("%d %d", &a, &b);
		soma = a + b;
		printf("%d\n", soma);
		printf("Deseja sair? Digite 0\n");
		scanf("%d", &parada);
		
	}while (parada != 0);

}
