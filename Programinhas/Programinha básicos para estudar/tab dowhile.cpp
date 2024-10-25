#include <stdio.h>
int main(){
	int i,n, cont;
	printf("Digite um numero: ");
	scanf("%d", &n);
	do{
		printf("%d x %d = %d\n", n, i++, n*i);
		
	}
	while(i <= 10);
	

}
