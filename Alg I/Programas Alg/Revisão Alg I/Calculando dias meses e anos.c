#include <stdio.h>

int main(){
	
	int dia, mes, ano, dia2, mes2, ano2, verificadia, verificames, verificaano, reprocess;
	
	do{
	
		printf("Digite a primeira data (sem /): ");
		scanf("%d %d %d", &dia, &mes, &ano);
	
		printf("Digite a segunda data (sem/): ");
		scanf("%d %d %d", &dia2, &mes2, &ano2);
	
		//verficação das datas
	
		if(dia2 > dia){
			verificadia = dia;
			dia = dia2;
			dia2 = verificadia;
		}
	
		if(mes2 > mes){
			verificames = mes;
			mes = mes2;
			mes2 = verificames;
		}
	
		if(ano2 > ano){
			verificaano = ano;
			ano = ano2;
			ano2 = verificaano;
		}
	
		//Calculando as datas para fornecer quantidade de dias, meses e anos
	
		printf("Total de dias: %d\n", (dia - dia2) + (mes - mes2)*30 + (ano - ano2)*365);
		printf("Total de meses: %d\n", (mes - mes2) + (ano - ano2)*12);
		printf("Total de anos: %d\n", ano - ano2);
		
		printf("Quer calcular novamente? Clique 1 para continuar ou 0 para sair: ");
		scanf("%d", &reprocess);
	
	}while(reprocess == 1);
	
	
}
