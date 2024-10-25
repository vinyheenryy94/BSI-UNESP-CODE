#include <stdio.h>

int main(){


int N, i, positivos = 0, negativos = 0;
int vet1[5];
int vet2[5];
int vet3[10];



do{
printf("Qual eh o tamanho do vetor (<=10) ?\n ");
scanf("%d",&N);
} while(N < 0 && N > 10  );
	

	for (i=0; i<N; i++){
	printf("Digite valores: \n");
	scanf("%d", &vet3[i]);}	
	
	for(i = 0; i < N; i++){

	if (vet3[i] >= 0){
		vet1[positivos] = vet3[i];
		positivos++;
	} else {
		vet2[negativos] = vet3[i];
		negativos++;
	}
	
}
	
	printf("Vetor de numeros positivos: \n");
	
	for(i = 0; i < positivos; i++){
		printf(" %d,", vet1[i]);

	}
	printf("\nQuantidade de numeros positivos: %d \n", positivos);
	
	
	printf("\nVetor de numeros negativos: \n");
	
		for(i = 0; i < negativos; i++){
		printf(" %d,", vet2[i]);

	}
	printf("\nQuantidade de numeros negativos: %d \n", negativos);
	
	




return 0;	
}
