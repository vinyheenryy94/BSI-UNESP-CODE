#include <stdio.h>
#define pr 50.0
#define qj 50.0
#define hb 100.0

int main (){
	int sand;
	printf("Informe a quantidade de sanduiches: ");
	scanf("%d", &sand);
	printf("A quantidade de presunto eh: %.3f kg \n", (pr / 1000) * sand);
	printf("A quantidade de queijo eh: %.3f kg \n",  (qj / 1000) * sand);
	printf("A quantidade de hamburguer eh: %.3f kg \n", (hb / 1000) * sand);
	return 0;
}
