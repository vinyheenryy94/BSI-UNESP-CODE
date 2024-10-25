#include<stdio.h>
#define ano 2022
int main (){
	int nasc, res;
	printf("Digite o ano que vc nasceu: ");
	scanf("%d", &nasc);
	res = ano - nasc;
	if(res >= 18){
		printf("Voce pode votar esse ano\n");
	}
	else{
		printf("Voce ainda nao pode votar\n");
	}
}
