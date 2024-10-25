#include <stdio.h>
int main(){
	float n1, n2, n3, n4, ex, media;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	media = ((n1*2) + (n2 * 3) + (n3 * 4) + (n4 * 1));
	printf("Media: %f\n", media);
	
	if (media >=7){
		printf("Aluno aprovado\n");
	}
	else{
		if (media >=5.0 && media <= 6.9){
			printf("Aluno em exame\n");
			scanf("%f", &ex);
			printf("nota do exame: %1f\n", ex);
			media = (media + ex) / 2;
			if (media >=5.0){
				printf("Aluno aprovado\n");
			}
			else{
				printf("Aluno reprovado\n");
			}
		
				printf("Media final: %1f\n", media);
			}
			else{
				printf("Aluno reprovado: \n")
				}
		}
	
return 0;
}
