#include <stdio.h>
int main(){
	int num;
	for (num = 0; num < 200; num++)
	{
		if(num%4 == 0)
			printf("%d", num);	
	}
return 0;		
}
