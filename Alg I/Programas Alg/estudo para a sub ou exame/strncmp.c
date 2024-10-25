#include<stdio.h>
#include<string.h>

void main(void){
	char *nome1 = "vinicius", *nome2 = "vinicius";
	int comp, qt = 4;
	
	comp = strncmp(nome1, nome2, qt);
	if(comp != 0)
		printf("Cadeia (%s) eh diferente que a cadeia (%s) nas %d primeiras posicoes\n", nome1, nome2, qt);
	else
		printf("Cadeia (%s) eh menor que a cadeia (%s)nas %d primeiras posicoes\n", nome1, nome2, qt);
		
   else if(comp == 0)
   
		printf("Cadeia (%s) eh igual a cadeia (%s) nas %d primeiras posicoes\n", nome1, nome2, qt);

}
