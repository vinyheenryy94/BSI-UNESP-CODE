/*Escreva	 uma função	 que	 receba	 dois	 números	inteiros	 retorne	 o	menor
número*/

int compara (int a, int b){
	if(a > b){
		return b;
	} else{
		return a;
	}
}

int main(){
	 int a, b, resultado;
	 
	 printf("Digite um valor: ");
	 scanf("%d", &a);
	 printf("Digite outro valor: ");
	 scanf("%d", &b);
	 
	 resultado = compara(a, b);
	 
	 printf("O menor numero eh: %d", resultado);
	 return 0;
}
