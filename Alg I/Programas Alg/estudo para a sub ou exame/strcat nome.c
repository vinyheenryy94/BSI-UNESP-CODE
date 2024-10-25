#include<stdio.h>
#include<string.h>

int main (){


	char *ex[40];
	char *nome = "Vinicius";
	char *sobrenome = " Henrique";

	strcpy(ex, nome);
	strcat(ex, sobrenome);
	printf("%s", ex);

}
