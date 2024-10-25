/*Descubra o signo do zodíaco de uma pessoa, tendo como dados de entrada o dia e o mês de nascimento.*/


#include <stdio.h>

int main(){
	int dia, mes, reprocess;
	
	do{
		printf("Digite o dia de nascimento: ");
		scanf("%d", &dia);
		printf("Digite o mes de nascimento: ");
		scanf("%d", &mes);
		
		if((mes == 1 && dia >= 21) || (mes == 2 && dia <= 18)){
			printf("Aquario\n");
			}else if((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)){
				printf("Peixes\n");
			}else if((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)){
				printf("Aries\n");
			}else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)){
        		printf("Touro\n");
   			} else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)){
        		printf("Gemeos\n");
    		} else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)){
        		printf("Cancer\n");
    		} else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)){
        		printf("Leao\n");
    		} else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)){
        		printf("Virgem\n");
    		} else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)){
        		printf("Libra\n");
    		} else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)){
        		printf("Escorpiao\n");
    		} else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)){
        		printf("Sagitario\n");
    		} else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)){
        		printf("Capricornio\n");
    		} else {
        		printf("Data de nascimento invalida\n");
    	}
    	printf("Quer continuar? Digite 1\n");
    	scanf("%d", &reprocess);

    }while(reprocess == 1);
}
