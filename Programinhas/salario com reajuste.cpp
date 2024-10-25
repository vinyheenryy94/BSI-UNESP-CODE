#include <stdio.h>
int main() {
	float salary;
	
	scanf("%f", &salary);

	if (salary <= 400.0) {
		printf("Novo salario: %.2f\n", salary * 1.15);
		printf("Reajuste ganho: %.2f\n", salary * 1.15 - salary);
		printf("Em percentual: 15 %%\n");	
	}
	else if (salary <= 800.0) {
		printf("Novo salario: %.2f\n", salary * 1.12);
		printf("Reajuste ganho: %.2f\n", salary * 1.12 - salary);
		printf("Em percentual: 12 %%\n");
	}
	    else if (salary <= 1200.0) {
		    printf("Novo salario: %.2f\n", salary * 1.1);
		    printf("Reajuste ganho: %.2f\n", salary * 1.10 - salary);
	    	printf("Em percentual: 10 %%\n");
	    }
	        else if (salary <= 2000.0) {
		        printf("Novo salario: %.2f\n", salary * 1.07);
		        printf("Reajuste ganho: %.2f\n", salary * 1.07 - salary);
		        printf("Em percentual: 7 %%\n");
	        } 
	            else {
		            printf("Novo salario: %.2f\n", salary * 1.04);
		            printf("Reajuste ganho: %.2f\n", salary * 1.04 - salary);
		            printf("Em percentual: 4 %%\n");
	            }
 
 return 0;
}
