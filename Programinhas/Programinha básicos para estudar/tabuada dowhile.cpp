#include<stdio.h>
int main(){
	int i, n1;
	printf("Digite um numero: \n");
	scanf("%d", &n1);
	do{
		printf("%d x %d = %d\n", n1, i++, n1*i);	
	}
	
	while (i <= 10);
	
return 0;
}
