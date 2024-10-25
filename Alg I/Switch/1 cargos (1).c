#include <stdio.h>

int main(){
int cod;
double sal;

scanf("%d", &cod);
scanf("%lf", &sal);

switch (cod){
	case 1: printf("Escrituario e aumento de %.2lf", sal + (sal*0.50)); break;
	case 2: printf("Secretario e aumento de %.2lf", sal + (sal*0.35)); break;
	case 3: printf("Caixa e aumento de %.2f", sal + (sal*0.20)); break;
	case 4: printf("Gerente e aumento de %.2lf", sal + (sal*0.10)); break;
	case 5: printf("Diretor e aumento de %.2lf", sal + (sal*0.00)); break;
}	
return 0;
}


