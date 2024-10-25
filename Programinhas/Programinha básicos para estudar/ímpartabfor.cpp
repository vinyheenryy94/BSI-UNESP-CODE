#include <stdio.h>
int main(){
	int n, i, op = 1;
	while(op !=0){
		printf("\nOla, bem vindo a Tabuada Facil\n");
		printf("Primeiro, coloque o numero da tabuada que voce quer saber: ");
		scanf("%d", &n);
		for(i=0; i<=10; i++){
			if(i % 2 != 0){
				printf("%d x %d = %d\n", n, i, n*i);
			}
		}
	printf("Quer saber outra Tabuada? Clique 1 para continuar ou 0 para sair!\n");
	scanf("%d", &op);
	}
}
