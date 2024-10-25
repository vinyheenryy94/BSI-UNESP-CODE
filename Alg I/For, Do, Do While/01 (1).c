/*
Leia dois números A e B (A  < B). Calcule e mostre: 
(a) a soma dos números impares entre A e B (eles não entram na soma); 
(b) a multiplicação dos números múltiplos de 3 entre A e B.
*/

#include<stdio.h>

int main(){
	
	int a, b, soma;
	int multiplic = 1;
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite outro numero: ");
	scanf("%d", &b);
	
	for(a = a+1; a < b; a++){
		if((a % 2) !=0) { //verificando se o numero Ã© impar
		soma +=a; //se for impar soma o numero de a e atribui a soma
		}
		if((a%3) == 0){
			multiplic = a * multiplic;
		}
	}
	printf("A soma eh: %d\n", soma);
	printf("A multiplicacao eh: %d\n", multiplic);
	
	return 0;
}
