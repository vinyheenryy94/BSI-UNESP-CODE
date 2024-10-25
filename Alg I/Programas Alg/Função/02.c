#include <stdio.h>
int i=0;

int calcularSoma(int num1, int num2) {
    int menor = (num1 < num2) ? num1 : num2;
    int maior = (num1 > num2) ? num1 : num2;
    int soma = 0;
    

    for (int i = menor + 1; i < maior; i++) {
        soma += i;
    }

    return soma;
}

int main() {
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    int resultado = calcularSoma(num1, num2);
    printf("A soma dos numeros entre %d e %d eh: %d\n", num1, num2, resultado);

    return 0;
}

