#include <stdio.h>
int main(){
	int senha, op=1;
	while(op !=0){
		printf("Digite a senha: ");
		scanf("%d", &senha);
		if(senha == 1234){
			printf("Acesso Permitido\n");
		}
		else{
			printf("Acesso Negado\n");
		}
	printf("Clique 1 para tentar novamente: \n");
	scanf("%d", &op);
	}
	
}
