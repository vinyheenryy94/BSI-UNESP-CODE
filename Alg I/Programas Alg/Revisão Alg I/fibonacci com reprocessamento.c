#include <stdio.h>
int main(){
	
	int i, n, fib, fib2, fib3, reprocess;
	
	do{
		do{
			printf("Digite um numero: ");
			scanf("%d", &n);
		}while(n <= 0);
		
		fib = fib2 = 1;
		
		for(i = 3; i <= n; i++){
			fib3 = fib + fib2;
			fib = fib2;
			fib2 = fib3;
		}
		
		printf("\n%do termo eh: %d\n", n, fib2);
		
		printf("Digite 1 para fazer de novo ou 0 para sair: ");
		scanf("%d", &reprocess);
	}while(reprocess == 1);
}
