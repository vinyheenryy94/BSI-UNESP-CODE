#include <stdio.h>
int main (){
	int num1, num2, resto, soma;
	printf("Digite dois numeros: ");
	scanf("%d %d", &num1, &num2);n

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);
	
	soma = resto + num2;
	printf("O resultado da soma eh: %d\n", soma);
	
}
