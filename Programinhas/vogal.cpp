#include <stdio.h>
int main(){
	char op;
	scanf("%c", &op);
	if(op == 'a' || op == 'e' || op == 'i' || op == 'o' ||op =='u')
		printf("Vogal\n");
	else
		printf("Consoante\n");
return 0;
	
}
