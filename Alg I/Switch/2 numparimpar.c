/*
Leia um n�mero X (inteiro, maior que zero) e mostre seu d�gito menos significativo (D). Determine, tamb�m, se X � par. Se for, escreva o d�gito D por extenso. Sen�o diga que X � impar.

Exemplo: X = 156, ent�o a mensagem ser�: �O numero 156 termina com o digito 6 (seis)�

                X = 155, ent�o a mensagem ser�: �O numero 155 termina com o digito 5  e eh impar�
*/


#include <stdio.h>

int main(){
	int num, x;
	
	printf("Digite um numero maior que 0: ");
	scanf("%d", &num);
	
	x = num % 10;
		switch(x){
		case 0: printf("O numero %d termina com o digito %d e eh par  ", num, x); break;
		case 2: printf("O numero %d termina com o digito %d e eh par  ", num, x); break;
		case 4: printf("O numero %d termina com o digito %d e eh par  ",num, x); break;
		case 6: printf("O numero %d termina com o digito %d e eh par  ",num, x); break;
		case 8: printf("O numero %d termina com o digito %d e eh par  ",num, x); break;
		default: printf("O numero %d termina com o digito %d e eh impar", num, x);
		
	}
	
	return 0;
}
