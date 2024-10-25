#include <stdio.h>
int main(){
	int a, b, res, soma;
	printf("Digite as notas: ");
	scanf("%d %d", &a, &b);
	soma = a + b;
	res = (soma) / 2;
	if (res <=5)
		printf("Reprovado %d\n");
	else
		printf("Aprovado\n");
	
}
