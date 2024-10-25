#include <stdio.h>
int main(){
	int i, n, fib1, fib2, fib3;
	do{
		printf("Digite um numero positivo: ");
		scanf("%d", &n);
	} while (n <= 0);
	
	fib1 = fib2 = 1;
	for (i = 3; i <= n; i++){
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n%do. termo de Fibonacci %d", n, fib2);
}
