#include <stdio.h>
int main(){
	
	int idade;
	printf("Digite sua iadade: ");
	scanf("%d", &idade);
	
	if(idade >= 10 && idade<=18){
		printf("Esta no intervalo entre 10 e 18");
	}else{
		printf("Nao esta no intervalo entre 10 e 18 ");
	}
return 0;
}
