#include <stdio.h>
int main (){
	int n, i, op;
	do{
		printf("Digite um numero: ");
		scanf("%d", &n);
		for(i = 0; i <= 10; i++){
			printf("%d x %d = %d\n", n, i, n*i);
		}
		printf("Digite 1 para continuar ou 0 para encerrar: \n");
		scanf("%d", &op);
	} while (op != 0);
	
}
