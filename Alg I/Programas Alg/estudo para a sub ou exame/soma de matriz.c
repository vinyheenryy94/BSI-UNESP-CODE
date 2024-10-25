#include <stdio.h>

int main(){
	
	int MA[3][3], MB[3][3], MC[3][3], i, j;
	
	printf("Digite os elementos de A: \n");
	for(i = 0; i< 3; i++){
		for(j = 0; j< 3; j++){
		scanf("%d", &MA[i][j]);
		}
	}
	
	printf("Digite os elementos de B: \n");
	for(i = 0; i< 3; i++){
		for(j = 0; j< 3; j++){
		scanf("%d", &MB[i][j]);
		}
	}
	
	printf("Matriz A \n");
	for(i = 0; i< 3; i++){
		for(j = 0; j< 3; j++){
		printf("%d\n", MA[i][j]);
		}
	}
	
	printf("Matriz B \n");
	for(i = 0; i< 3; i++){
		for(j = 0; j< 3; j++){
		printf("%d\n", MB[i][j]);
		}
	}
	
	printf("Matriz C \n");
	for(i = 0; i< 3; i++){
		for(j = 0; j< 3; j++){
		MC[i][j] = MA[i][j] + MB[i][j];
		printf("%d\n", MC[i][j]);
		}
	}
	
	return 0;
}
