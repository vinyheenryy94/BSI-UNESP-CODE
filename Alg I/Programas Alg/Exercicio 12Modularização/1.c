#include <stdio.h>

long int potencia(int X, int N) {
    long int resultado = 1;
    int i;
    for (i = 0; i < N; i++) {
        resultado *= X;
    }
    return resultado;
}

long int fatorial(int X) {
    long int resultado = 1;
    int i;
    for (i = 1; i <= X; i++) {
        resultado *= i;
    }
    return resultado;
}

float exponencial(int X, int termos) {
    float resultado = 0;
    int i;
    for (i = 0; i < termos; i++) {
        resultado += (float)potencia(X, i) / fatorial(i);
    }
    return resultado;
}

int main() {
    int X, N, termos;
    
    printf("Digite o valor de X para calcular X^N: ");
    scanf("%d", &X);
    printf("Digite o valor de N para calcular X^N: ");
    scanf("%d", &N);
    
    printf("O valor de %d^%d é: %ld\n", X, N, potencia(X, N));
    
    printf("Digite o valor de X para calcular o fatorial: ");
    scanf("%d", &X);
    
    printf("O fatorial de %d é: %ld\n", X, fatorial(X));
    
    printf("Digite o valor de X para calcular a exponencial: ");
    scanf("%d", &X);
    printf("Digite o número de termos para calcular a exponencial: ");
    scanf("%d", &termos);
    
    printf("O valor de e^%d é: %.4f\n", X, exponencial(X, termos));
    
    return 0;
}

