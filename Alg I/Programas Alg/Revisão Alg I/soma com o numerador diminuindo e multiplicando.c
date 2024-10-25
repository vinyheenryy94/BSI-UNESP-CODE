/*Calcule o resultado da soma: S = (37*38)/1 + (36*37)/2 + (35*36)/3 + ..... (1*2)/37*/

#include <stdio.h>

int main (){
	
	float i, j, k, s;
	for(i = 37, j = 38, k = 1; k <= 37; i--, j--, k++){
		s += (i*j) / k;
	}
	printf("%.2f", s);
	return 0;
}
