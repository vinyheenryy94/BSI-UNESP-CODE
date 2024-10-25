/*
Escreva um programa que apresente o cubo dos números inteiros dentro de um intervalo (fechado, ou seja, inclui os valores) 
fornecido pelo usuário. Resolva esse exercício usando as três estruturas de repetição.
*/
#include <stdio.h>

int main(){
	int i, a, b, cubo;
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite um numero: ");
	scanf("%d", &b);
	//for
	for(i = a + 1; i < b; i++){
		cubo  = i*i*i;
		printf("O cubo eh: %d\n", cubo);
	}
	
}

//while
	while(a < b){ //posso colocar b-1 caso eu nÃ£o queira que inclua o b
		a++;
		cubo = a*a*a;
		printf("O cubo eh: %d\n", cubo);
		
	}
// do while
	do{
		a++;
		cubo = a*a*a;
		printf("O cubo eh: %d\n", cubo);
	} while (a<b);
	
	return 0;
}
