#include <stdio.h>

void vetor(int vetA, int vetB, int *vetC){
	*vetC = vetA + vetB;
}

int main(){
	int vetA[3], vetB[3], vetc[3], i;
	
	//lendo os vetores de A
	
	printf("Digite os elementos de A: ");
	for(i = 0; i<3; i++){
		scanf("%d", &vetA[i]);
	}
	
	//Lendo os vetores de B
	printf("Digite os elementos de B: ");
	for(i = 0; i<3; i++){
		scanf("%d", &vetB[i]);
	}
	
	//imprimindo A
	printf("A: ");
	for(i = 0; i<3; i++){
		printf("%d\n", vetA[i]);
	}
	
	//imprimindo B
	printf("B: ");
	for(i = 0; i<3; i++){
		printf("%d\n", vetB[i]);
	}
	
	int vetC[i];
	printf("A soma dos vetores eh: ", vetC[i]);
	
	for(i = 0; i<3; i++){
		vetor(vetA[i], vetB[i], &vetC[i]);
		printf("%d", vetC[i]);
	}
}
