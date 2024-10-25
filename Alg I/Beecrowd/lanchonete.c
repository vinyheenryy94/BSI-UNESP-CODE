#include <stdio.h>

#define HOT_DOG 4.00
#define SALAD 4.50
#define BACON 5.00
#define TOAST 2.00
#define SODA 1.50

int main(){
	int quant, cod;
	scanf("%d %d", &cod, &quant);
	
	switch(cod){
		case 1: printf("Total: R$ %.2f\n", quant * HOT_DOG); break;
		case 2: printf("Total: R$ %.2f\n", quant * SALAD); break;
		case 3: printf("Total: R$ %.2f\n", quant * BACON); break;
		case 4: printf("Total: R$ %.2f\n", quant * TOAST); break;
		case 5: printf("Total: R$ %.2f\n", quant * SODA); break;
	}
	
return 0;
}
