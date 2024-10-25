#include <stdio.h>

long int fib(int n){
	long int f, f1, f2;
	f1=f2=1;
	for(int i = 3; i<=n; i++){
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	return f2;
}

int main(){
	
	int num, repr;
	do{
		scanf("%d", &num);
		printf("Fibo(%d) = %ld\n", num, fib(num));
		printf("Digite 1 pra continuar ou 0 para sair: ");
		scanf("%d", &repr);
	}while(repr == 1);
}
