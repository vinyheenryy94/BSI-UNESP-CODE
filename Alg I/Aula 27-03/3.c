#include <stdio.h>

int main(){
	
	float temp, far;
	printf("Digite a temperatura: ");
	scanf("%f", &temp);
	
	far = (9*temp + 160) / 5;  //conversão de Celsius para Fahrenheit
	
	printf("A temperatura em Fahrenheit eh: %10f\t", far);
	return 0;
}
