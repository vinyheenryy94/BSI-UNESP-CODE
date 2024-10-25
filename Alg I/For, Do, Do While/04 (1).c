/*
Cada espectador de um cinema respondeu a um questionário no qual constava a sua idade e sua opinião em relação ao filme:
ótimo(3), bom(2), regular(1). Faça um programa que receba a idade e a opinião de 15 espectadores, calcule e escreva:
a)A média das idades das pessoas que responderam ótimo;
b)A quantidade de pessoas que responderam regular;
c)A percentagem de pessoas que responderam bom, entre todos os espectadores analisados.
*/
#include <stdio.h>

int main(){
	int idade, op, i;
	int cont1 = 0, cont3 = 0;
	float somaId, cont2 = 0;
	
	for(i = 0; i < 3; i++){
		printf("Digite a sua idade: \n");
		scanf("%d", &idade);
		printf("Digite qual a sua opiniao do filme  1 - Regular, 2 - Bom, 3 - Otimo:  \n");
		scanf("%d", &op);
		
		if(op == 1){
		cont1 ++;
		}
		if(op == 3){
			cont3 ++;
			somaId += idade;
		}
		if(op == 2){
			cont2++;
		}
	}
	printf("%d acharam o filme ruim\n", cont1);
	
	if(cont3 > 0){
		printf("%.1f media das idades que acharam o filme otimo \n", (somaId / cont3));
	}
	if(cont2 > 0){
		printf("%f %%: porcentagem d epessoas que achou o filme bom entre todos entrevistados\n", (cont2 * 100) / 3);
	}
	return 0;
}
