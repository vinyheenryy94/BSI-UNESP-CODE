#include <stdio.h>
#include <string.h>

void transformarData(char* frase) {
    const char* mesesExtenso[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    const char* mesesNumerico[] = {
        "01", "02", "03", "04", "05", "06",
        "07", "08", "09", "10", "11", "12"
    };

    char dia[3], mes[20], ano[5];
    int i, j;

    if (sscanf(frase, "%2s de %20s de %4s", dia, mes, ano) != 3) {
        printf("Formato de data inválido.\n");
        return;
    }

    for (i = 0; i < 12; i++) {
        if (strcmp(mes, mesesExtenso[i]) == 0) {
            strcpy(mes, mesesNumerico[i]);
            break;
        }
    }

    if (i == 12) {
        printf("Mês inválido.\n");
        return;
    }

    for (j = 0; j < strlen(dia); j++) {
        if (dia[j] == ',') {
            dia[j] = '\0';
            break;
        }
    }

    printf("Nova frase: %s/%s/%s\n", dia, mes, ano);
}

int main() {
    char frase[100];

    printf("Digite a frase com a data no formato 'DD de MM de AAAA': ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    transformarData(frase);

    return 0;
}

