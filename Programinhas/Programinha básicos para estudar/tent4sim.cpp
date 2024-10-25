#include <stdio.h>

int main(){
    int resp, i, j, valor, aux=1;
    scanf("%d", &valor);
        for(i=1; i<=valor; i++){
            for(j=1; j<=aux; j++){
                printf(" %d", j*j);
            }
            aux++;
            printf("\n");
        }
        aux-=2;
        for(i=1;i<=valor-1;i++){
            for(j=1;j<=aux;j++){
                printf(" %d", j*j);
            }
            aux--;
            printf("\n");
        }
}
