#include<stdio.h>
int main(){
	int i, n;
	printf("Digite o num da tabuada que vc quer saber: ");
	scanf("%d", &n);
	for(i = 0; i<=10; i++){
		printf("%d x %d = %d\n", n, i, n*i);
	}
return 0;
}
