// Escreva uma função que dado n calcule Fn. 
// Faça um programa, com reprocessamento, que utilize esta função.

#include<stdio.h>

long int fib (int n){
	long int f1, f2, f;
	f1 = f2 = 1;
	
	for(int i = 3; i<= n; i++){
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	return f2;
}	
int main(){
	
	int num, reproc;
	do{
		printf("Digite um numero: ");
		scanf("%d", &num);
	
		printf("fibo(%d) = %ld\n",num,fib(num));
		printf("Deseja continuar?\n");
		printf("Digite 1 para continuar ou outro numero para sair:   ");
		scanf("%d", &reproc);
	}while(reproc == 1);
}

