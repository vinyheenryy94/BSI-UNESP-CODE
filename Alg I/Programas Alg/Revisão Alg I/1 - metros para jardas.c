#include <stdio.h>

int main(){
	
	float metro, jardas;
	
	printf("Digite um valor em metros: ");
	scanf("%f", &metro);
	jardas = metro*1.093613;
	printf("O valor em jardas eh: %f ", jardas);
	return 0;
}
