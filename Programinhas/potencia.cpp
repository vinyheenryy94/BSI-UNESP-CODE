#include <stdio.h>
#include <math.h>
int main (){
	int x,y, i, pot;
	do{
	printf("Digite dois numeros inteiros e positivos");
	scanf("%d %d", &x, &y);
	}while (x < 0 || y < 0 );
	
	pot = 1
	for (i = 1; i <= y; i++)
	pot = pot * x;
	
	printf("\n%d elevado eh %d", pot);
	}
	
	
}
