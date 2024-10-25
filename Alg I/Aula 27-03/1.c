#include <stdio.h>

int main(){
	
	double numero;
	int x = 2, y = 5;
	float porc;
	
	printf("%10d\n", 1324); //a
	printf("%+3E\n", 123.456789); //b
	printf("Digite um numero com varios decimais: ");//c
	scanf("%lf", &numero);
	printf("O numero eh: %lf\n", numero);
	printf("%o\n", 100); //d
	printf("%*.*f\n", x, y, 87.4573);//e
	printf("Digite um numero %"); //f
	scanf("%f%%", &porc);
	printf("O numero eh: %f\n ", porc);
	printf("%20.3lf\n", -3.3333); //g
	
}
