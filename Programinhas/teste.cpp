#include <stdio.h>
int main(){
	int n1;
	printf("Digite o angulo: ");
	scanf("%d", &n1);
	if (n1 >=0 && n1 < 90 ){
		printf("1� quadrante \n");
	}
	else if(n1 >= 90 && n1 < 180){
		printf("2� quadrante \n");
	}
	else if (n1 >= 180 && n1 < 270){
		printf("3� quadrante \n");
	}
	else if (n1 >= 270 && n1 < 360){
		printf("4� quadrante \n");
	}
	else if (n1 <=0 && n1 < -90){
		printf("1� quadrante \n");
	}
	else if(n1 <= -90 && n1 < -180){
		printf("2� quadrante \n");
	}
	else if(n1 <= -180 && n1 < -270){
		printf("3� quadrante \n");
	}
	else{
		printf("4� quadrante \n");
	}
return 0;
}
