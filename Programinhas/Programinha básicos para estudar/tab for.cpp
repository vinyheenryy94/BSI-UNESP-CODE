#include <stdio.h>
int main (){
	int i, n, control = 1;
	while(control != 0){
		printf("Digite um numero: ");
		scanf("%d", &n);
		for(i = 0; i <= 10; i++){
		printf("%d x %d = %d \n", n, i, n*i);
		}
		printf("Deseja fazer novamente?\n 1 - Sim   0 - Nao\n");
		scanf("%d", &control);
	}	

		
}
