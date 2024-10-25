#include <stdio.h>
int main(){
	int n1;
	printf("Digite o angulo: ");
	scanf("%d", &n1);
	if (n1 >=0 && n1 < 90 ){
		printf("1º quadrante \n");
	}
	else if(n1 >= 90 && n1 < 180){
		printf("2º quadrante \n");
	}
	else if (n1 >= 180 && n1 < 270){
		printf("3º quadrante \n");
	}
	else if (n1 >= 270 && n1 < 360){
		printf("4º quadrante \n");
	}
	else if (n1 <=0 && n1 < -90){
		printf("1º quadrante \n");
	}
	else if(n1 <= -90 && n1 < -180){
		printf("2º quadrante \n");
	}
	else if(n1 <= -180 && n1 < -270){
		printf("3º quadrante \n");
	}
	else{
		printf("4º quadrante \n");
	}
return 0;
}
