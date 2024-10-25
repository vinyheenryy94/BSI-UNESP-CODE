#include <stdio.h>
#define vl1 0.30
#define vl2 0.25
int main (){
	int qt;
	printf("Quantas macas voce vai comprar?: ");
	scanf("%d", &qt);
	if(qt < 12){
		printf("O valor total a pagar eh R$ %.2f\n", qt*vl1);
	}
	else{
		printf("O valor total a pagar eh R$ %.2f\n", qt*vl2);
	}

}
