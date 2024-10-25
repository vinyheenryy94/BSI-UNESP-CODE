// Escreva um programa que use o especificador de conversão g para enviar à saída o valor 9876.12345. Imprima o valor com precisões variando de 1 a 9.

#include <stdio.h>

int main(){
	printf("%.1g\n", 9876.123456);
	printf("%.2g\n", 9876.123456);
	printf("%.3g\n", 9876.123456);
	printf("%.4g\n", 9876.123456);
	printf("%.5g\n", 9876.123456);
	printf("%.6g\n", 9876.123456);
	printf("%.7g\n", 9876.123456);
	printf("%.8g\n", 9876.123456);
	printf("%.9g\n", 9876.123456);
}

