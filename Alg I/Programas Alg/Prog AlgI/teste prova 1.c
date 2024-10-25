#include <stdio.h>

int main(){
	
	int cargo;
	double sal, sal2;
	
	printf(" Qual o seu emprego?\n");
	printf(" 10 - Medico\n");
	printf(" 25 - Enfermeiro\n");
	printf(" 35 - Aux. Enfermagem\n");
	scanf("%d", &cargo);
	
	printf(" Digite seu salario atual: \n");
	scanf("%lf", &sal);
	
	if(cargo == 10){
		printf("Seu salario atual eh: %lf", sal);
		sal2 = sal * 0.10;
		printf("Seu novo salario com aumento eh %lf", sal2); 
	}else if(cargo == 25){
		printf("Seu salario atual eh: %lf", sal);
		sal2 = sal * 0.20;
		printf("Seu novo salario com aumento eh %lf", sal2);
	}else if(cargo == 35){
		printf("Seu salario atual eh: %lf", sal);
		sal2 = sal * 0.30;
		printf("Seu novo salario com aumento eh %lf", sal2);
	}else{
		printf("Seu salario atual eh: %lf", sal);
		sal2 = sal * 0.25;
		printf("Seu novo salario com aumento eh %lf", sal2);
	}
	return 0;
}
