//Construa um programa que receba o pre�o de custo de um produto e calcule o pre�o final do mesmo sabendo que o 
//pre�o final � calculado atrav�s da soma do pre�o de custo, o valor impostos e o lucro esperado. 
//O valor dos impostos � de 45% do valor do pre�o de custo. O lucro esperado � de 50% do valor do pre�o de custo.


#include<stdio.h>
int main(){
	float custo, vi, prefinal, lucroesp;
	printf("Digite o preco de custo do produto: ");
	scanf("%f", &custo);
	lucroesp = ((custo/100)*45);
	vi = ((custo / 100)*50);
	prefinal = custo + lucroesp + vi;
	printf("O preco final eh: %f", prefinal);
	return 0;
}
