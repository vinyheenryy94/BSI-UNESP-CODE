#include <stdio.h>
int main(){
	float a, b, c, d, res, soma;
	printf("Digite as notas: ");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	soma = a + b + c + d;
	res = (soma) / 4;
	if (res <=5){
 		printf("Reprovado\n");
 	
	}
	
	else if (res <=7){
		printf("Exame \n");
	}
	else {
		printf("Aprovado\n");
	}	
	
}
