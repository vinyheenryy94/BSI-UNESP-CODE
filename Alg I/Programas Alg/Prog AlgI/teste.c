#include <stdio.h>

int main(){
	
	int num, i, j, reprocess;
	do{
	
		do{
			printf("Digite um numero de 1 a 25: ");
			scanf("%d", &num);	
		}while(num <= 0 || num > 25);
	
		for(i = 1; i <= num; i++){
			for(j = 1; j <= i; j++)
				printf("%d", j*3);
			printf("\n");
		}
		
		printf("Caso queira continuar a sequencia, digite 1 para continuar ou 0 para sair: ");
		scanf("%d", &reprocess);
		
	}while(reprocess == 1);
}
