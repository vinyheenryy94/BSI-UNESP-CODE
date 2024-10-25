#include <stdio.h>

int main(){
	
	float hectares, acres;
	
	printf("Digite um valor em hectares: ");
	scanf("%f", &hectares);
	acres = hectares*2.471054;
	printf("O valor em acres eh: %f ", acres);
	return 0;
}
