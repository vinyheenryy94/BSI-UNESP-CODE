/*
Leia o RA e a idade das pessoas de uma classe de N alunos (N>0, fornecido pelo usuário). Indique o aluno mais velho (RA e idade) e o mais novo (RA e idade).
*/


#include<stdio.h>

int main(){
	
	int idade, ra, n, maIdade = 0, maRA, menId = 100, meRA;
	
	printf("Digite quantas leituras quer fazer: ");
	scanf("%d", &n);
	
	for(n; n>0; n--){
		printf("Digite o RA: \n");
		scanf("%d", &ra);
		printf("Digite a idade: \n");
		scanf("%d", &idade);
		
		if (idade > maIdade){
			maIdade = idade;
			maRA = ra;
		}
		if (idade < menId){
			menId = idade; 
			meRA = ra;
		}
	}
	
	printf("O estudante do RA %d tem a maior idade %d\n", maRA, maIdade);
	printf("O estudante do RA %d tem a menor idade %d", meRA, menId);
	
	return 0;

}
