/*
Calcule e mostre uma tabela de graus Celsius e Fahrenheit, cujos graus Celsius variem de 50 a 65 de 0,5 em 0,5.
*/


#include <stdio.h>

int main(){
	
	float celsius, far;
	
	for(celsius = 50; celsius <= 65; celsius += 0.5){ //quero que suba de 0.5
		far = (celsius *(9.0/5.0))+ 32;
		
	}
	
	printf("A temperatura sera %f celsius e %f fahreheint", celsius, far);
	return 0; 
}
