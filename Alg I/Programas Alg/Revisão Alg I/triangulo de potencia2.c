#include <stdio.h>

int main(){
	
	int num, i, j, reprocess;
	do{
		do{
			printf("Digite um numero de 1 a 100: ");
			scanf("%d", &num);
		}while(num <= 0 || num > 100);
		
		for(i = 1; i <= num; i++){
			for(j = 1; j <= i; j++)
				printf("%d", j*j);
			printf("\n");
		}
		
		for(i = num - 1; i >= 1; i--){
			for(j = 1; j <= i; j++)
				printf("%d", j*j);
			printf("\n");
		}
		
		printf("Se desejar fazer de novo, digite 1 ou outro numero para sair: ");
		scanf("%d", &reprocess);
		
	}while(reprocess == 1);
	
}
