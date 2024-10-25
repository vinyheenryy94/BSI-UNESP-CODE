#include <stdio.h>

int verificarNumero(int numero) {
    if (numero > 0) {
        return 1;
    } else if (numero == 0) {
        return 0;
    } else {
        return -1;
    }
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    int resultado = verificarNumero(numero);
    printf("Resultado: %d\n", resultado);

    return 0;
}

