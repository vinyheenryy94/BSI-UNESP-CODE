#include<stdio.h>
int main() {

	float n; 
	int positivo = 0, i;

	for (i = 0; i < 5; i++) { 
		scanf("%f", &n); 
		if (n > 0) { 
		positivo++; 
		}
	}

	printf("%d valores pares\n", positivo);

return 0; 
}
