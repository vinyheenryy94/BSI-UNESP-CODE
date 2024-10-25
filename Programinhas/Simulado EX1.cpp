#include <stdio.h>
int main(){
	int RA;
	float n1, n2, n3, MA, ME;
	printf("Digite o numero do seu RA: ");
	scanf("%d", &RA);
	printf("Digite suas tres notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	printf("Digite sua media de exercicios: ");
	scanf("%f", &ME);
	MA = ((n2 * 2) + (n3 * 3) + n1 + ME) / 7;
	if (MA <= 4 ){
	printf("E \n");	
	}
	else if(MA >= 4 && MA < 6){
		printf("D \n");
		
	}
		else if (MA >= 6 && MA < 7.5){
			printf("C \n");
		}
			else if (MA >= 7.5 && MA < 9 ){
				printf("B \n");
			}
				else{
					printf("A \n");
				}
	if (MA < 6 ){
		printf("Reprovado \n");
	}
	else{
		printf("Aprovado \n");
	}
return 0;
}
