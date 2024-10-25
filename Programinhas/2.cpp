#include <stdio.h>
#include <math.h>

int main (){
	double A, B, C, DELTA, R1, R2;
	scanf("%lf %lf %lf", &A, &B, &C);
	DELTA = pow(B, 2) - 4.0 * A * C;
	
	if(DELTA <0 || A ==0){
		printf("Impossivel calcular\n");
	}
	else{
		R1 = (-B + sqrt(DELTA)) / (2.0 * A);
		R2 = (-B - sqrt(DELTA)) / (2.0 * A);
		printf("R1 = %.5lf\n", R1);
		printf("R2 = %.5lf\n", R2);
	}
	return 0;
}
