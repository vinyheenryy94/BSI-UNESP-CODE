//Construa um programa que receba o preço de custo de um produto e calcule o preço final do mesmo sabendo que o 
//preço final é calculado através da soma do preço de custo, o valor impostos e o lucro esperado. 
//O valor dos impostos é de 45% do valor do preço de custo. O lucro esperado é de 50% do valor do preço de custo.


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
