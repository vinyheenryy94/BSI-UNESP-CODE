/*Faça um programa com reprocessamento onde se o usuario escolher A calcule a média aritmetica, se for P ponderada, com peso 5 3 e 2*/

#include <stdio.h>

float media(float n1, float n2, float n3, char op){
	if(op == 'A'){
		return (n1 + n2 + n3) / 3;
	} else if(op == 'P'){
		return (n1*5 + n2*3 + n3*2) / 10;
	}
}

int main(){
	
	float n1, n2, n3, calc, reproc;
	char op;
	
	do{
	
		printf("Digite A para aritmetica ou P para ponderada: ");
		scanf("%c", &op);
	
		printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		printf("Digite a terceira nota: ");
		scanf("%f", &n3);
	
		calc = media(n1, n2, n3, op);
	
		printf("A media eh: %.2f\n", calc);
		
		printf("Quer continuar? Digite 1 para continuar ou 0 para sair: ");
		scanf("%d", &reproc);
	}while(reproc != 0);
}
