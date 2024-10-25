#include<stdio.h>
int main() {

	float n, med; 
	int positivo = 0, i;

	for (i = 0; i < 6; i++) { 
		scanf("%f", &n); 
		if (n > 0) { 
		positivo++; 
		}
	}
	med = (n / positivo);
	printf("%d valores positivos\n", positivo);
	printf("%.1f", med);
return 0; 
}
