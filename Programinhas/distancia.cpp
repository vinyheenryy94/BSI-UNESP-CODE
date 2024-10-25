#include <stdio.h>
int main (){
	int X1, Y1, X2, Y2;
	printf("Digite as distancias: ");
	scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
	printf("%d\n",  (X1 + Y1) - (-(X2 + Y2)));
	return 0;
}
