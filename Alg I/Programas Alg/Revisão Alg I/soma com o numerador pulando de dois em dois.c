#include <stdio.h>

int main(){
	
	float i, j, s;
	
	for(i = 1, j = 1; j <= 50; i += 2, j++){
		s += i/j;
		printf("%.0f/%.0f\t", i, j);
	}
	
	printf("%.2f\n", s);
	return 0; 
}
