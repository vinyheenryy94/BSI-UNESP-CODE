#include <stdio.h>
int main(){
	
	int he;
	double hf, h;
	
	printf("Digite suas horas extras: ");
	scanf("%d", &he);
	printf("Digite suas horas falta: ");
	scanf("%lf", &hf);
	
	h = (he) - 2/3 * (hf);
	
	if(h > 40){
		printf("R$ 500,00");
	}else if(h>=30 && h<= 40){
		printf("R$400,00");
	}else if(h>=20 && h<=30){
		printf("R$300,00");
	}else if(h>= 10 && h<=20){
		printf("R$200,00");
	}else if(h<10){
		printf("R$100,00");
	}
return 0;
}
