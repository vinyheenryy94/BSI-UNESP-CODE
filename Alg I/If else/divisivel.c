#include <stdio.h>
int main(){
	
	int a;
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	if(a%3 != 0){
		printf("Nao eh divisivel\n");
		}else{
			printf("Eh divisivel\n");
		}
	
	if(a%6 != 0){
		printf("Nao eh divisivel\n");
		}else{
			printf("Eh divisivel\n");
		}
	
return 0;
}
