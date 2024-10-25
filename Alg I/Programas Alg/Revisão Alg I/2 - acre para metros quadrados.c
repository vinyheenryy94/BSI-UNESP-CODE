#include <stdio.h>

int main(){
	
	float acre, metroquad;
	
	printf("Digite um valor em acre: ");
	scanf("%f", &acre);
	metroquad = acre*4046.856422;
	printf("O valor em metros quadrado eh: %f ", metroquad);
	return 0;
}
