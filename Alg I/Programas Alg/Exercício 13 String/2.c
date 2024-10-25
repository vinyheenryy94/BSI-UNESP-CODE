#include <stdio.h>

// Fun��o equivalente � strlen()
int meu_strlen(const char* str) {
    int tamanho = 0;
    
    while (str[tamanho] != '\0') {
        tamanho++;
    }
    
    return tamanho;
}

// Fun��o equivalente � strupr()
void meu_strupr(char* str) {
    int i = 0;
    
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

// Fun��o equivalente � strcpy()
void meu_strcpy(char* destino, const char* origem) {
    int i = 0;
    
    while (origem[i] != '\0') {
        destino[i] = origem[i];
        i++;
    }
    
    destino[i] = '\0';
}

int main() {
    // Testando as fun��es
    
    char str1[] = "Hello, world!";
    char str2[20];
    char str3[20];
    
    // Testando meu_strlen()
    int tamanho = meu_strlen(str1);
    printf("Tamanho da string: %d\n", tamanho);
    
    // Testando meu_strupr()
    meu_strupr(str1);
    printf("String em mai�sculas: %s\n", str1);
    
    // Testando meu_strcpy()
    meu_strcpy(str2, str1);
    printf("C�pia da string: %s\n", str2);
    
    return 0;
}

