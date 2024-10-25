#include<stdio.h>
int main(){
	int RA, n, i;
	printf("Digite seu RA: ");
	scanf("%d", &RA);
	printf("Digite um numero: ");
	scanf("%d", &n);
	if(n >=0 && n <= 100)
	for (i = 0; i < 3; i++){
		printf("%d\n", n);
		n++;
	}
	
}
