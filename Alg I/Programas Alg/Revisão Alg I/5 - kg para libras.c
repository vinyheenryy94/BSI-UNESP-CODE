#include <stdio.h>

int main(){
	
	float kg, libras;
	
	printf("Digite um valor em hectares Kg: ");
	scanf("%f", &kg);
	libras = kg*2.204623;
	printf("O valor em libras eh: %f ", libras);
	return 0;
}
