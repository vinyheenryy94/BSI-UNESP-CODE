#include <stdio.h>
int main(){
	int i, n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	while(i <= 10){
		printf("%d x %d = %d\n", n, i++, n*i);
	}
}
