#include <stdio.h>

int main(){
	
	int VA[10], VB[10], VC[10], i;
	
	printf("Digite os elementos de A: \n");
	for(i = 0; i< 10; i++){
		scanf("%d", &VA[i]);
	}
	
	printf("Digite os elementos de B: \n");
	for(i = 0; i< 10; i++){
		scanf("%d", &VB[i]);
	}
	
	printf("Vetor A \n");
	for(i = 0; i< 10; i++){
		printf("%d\n", VA[i]);
	}
	
	printf("Vetor B \n");
	for(i = 0; i< 10; i++){
		printf("%d\n", VB[i]);
	}
	
	printf("Vetor C \n");
	for(i = 0; i< 10; i++){
		VC[i] = VA[i] + VB[i];
		printf("%d\n", VC[i]);
	}
	
	return 0;
}
