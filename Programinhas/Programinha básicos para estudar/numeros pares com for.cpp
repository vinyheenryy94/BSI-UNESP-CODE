#include <stdio.h>
int main (){
	int i, num;
	for (i = 1; i <= 100; i++){
		num = i%2;
		if (num % 2 ==0)
			printf("%d\n", i);
	}
	
}
