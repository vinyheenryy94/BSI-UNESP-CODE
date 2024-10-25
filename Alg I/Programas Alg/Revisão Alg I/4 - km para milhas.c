#include <stdio.h>

int main(){
	
	float km, milhas;
	
	printf("Digite um valor em Km/h: ");
	scanf("%f", &km);
	milhas = km*0.621371;
	printf("O valor em Milhas/hora eh: %f ", milhas);
	return 0;
}
