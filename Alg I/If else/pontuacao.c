#include <stdio.h>
int main(){
	int p1, p2, p3;
	printf("Digite a primeira pontuacao");
	scanf("%d", &p1);
	printf("Digite a segunda pontuacao");
	scanf("%d", &p2);
	printf("Digite a terceira pontuacao");
	scanf("%d", &p3);
	
	if((p1 > p2)&&(p1 > p3)){
		printf("Primeiro lugar");
	}else if((p1 < p2)&&(p2 < p3)){
		printf("Segundo lugar");
	}else if((p1 < p3) && (p2>p3)){
		printf("Ultimo lugar");
	}
return 0;
}
