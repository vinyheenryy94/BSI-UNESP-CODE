/*
 Solicite um n�mero entre 1 e 4. Se a pessoas digitar um n�mero diferente, mostrar a mensagem 
 "entrada inv�lida" e solicitar o n�mero novamente. Se digitar correto mostrar o n�mero digitado.
*/
#include <stdio.h>

int main(){
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	while( n<1 || n>4){
		printf("numero invalido, por favor digite outro numero: \n");
		scanf("%d", &n);
	}
	printf("numero escolhido foi o %d\n", n);
	
	return 0;
}
