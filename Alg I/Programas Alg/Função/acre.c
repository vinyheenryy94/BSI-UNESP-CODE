#include <stdio.h>

float Calcularacre(float num1){
	return num1 * 2.471054;
}

int main(){
	float num1;
	printf("Digite um numero para saber em Acres: ");
	scanf("%f", &num1);
	
	//float resultado = Calcularacre(num1);
	float resultado;
 	Calcularacre(num1, &resultado);
	printf("O resultado eh: %f\n", resultado);
	
	return 0;
}


