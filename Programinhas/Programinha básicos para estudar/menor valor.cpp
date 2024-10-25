#include <stdio.h>
int main (){
	int a, b;
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite outro numero: ");
	scanf("%d", &b);
	if(a < b){
		printf("O menor valor eh %d", a);
	}
	else{
		printf("O menor valor eh %d", b);
	}
}
