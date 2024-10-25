#include<stdio.h>
int main(){
	int i, n1;
	printf("Digite um numero: \n");
	scanf("%d", &n1);
	while(i<=9){
			i++;
	printf("%d x %d = %d\n", n1, i, n1*i);
	}
}
