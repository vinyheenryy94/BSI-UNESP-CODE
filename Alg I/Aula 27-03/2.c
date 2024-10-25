#include <stdio.h>

int main (){
	
	int hora, minuto, segundo, h, m, s;
	printf("%15.8d\n", 40000); //a
	
	printf("%+d\n", 200); //c
	printf("%i\n", -200); //c
	printf("%#x\n", 100); //d  #precede(0x)
	printf("%09f\n", 1.234); //e
	printf("Digite horas em hh:mm:ss " ); //f
	scanf("%d%*c%d%*c%d%*c", &hora, &minuto, &segundo);
	printf("%d horas %d minutos e %d segundos\n", hora, minuto, segundo);
	printf("Digite horas em hh:mm:ss " ); //g
	scanf("%d%:%d%:%d", &h, &m, &s);
	printf("%d:%d:%d", h, m, s);
}
