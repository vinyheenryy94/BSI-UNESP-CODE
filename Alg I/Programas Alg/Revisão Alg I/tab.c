#include <stdio.h>

int main() {
	
	int n, i, reprocess;
	do{
		printf("Digite um numero positivo: ");
		scanf("%d", &n);
		
		for(i = 0; i <= 10; i++){
			printf("%d x %d = %d\n", n, i, n*i);
		}
		
		printf("Deseja fazer outra tabuada? Digite 1 para continuar: ");
		scanf("%d", &reprocess);
	}while(reprocess == 1);

}
