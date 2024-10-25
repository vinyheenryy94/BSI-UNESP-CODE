#include <stdio.h>

    int calculaFatorial(int n)
    {
        int fat = 1;

        if (n == 0)
            return 1;
        
        for (int i = n; i > 0; i--)
        {
            fat *= i;
        }

        return fat; 
    }

    int main()
    {
        int num;

        printf("Digite um numero: ");
        scanf("%d", &num);

        printf("O fatorial de %d eh %d\n", num, calculaFatorial(num));

        return 0;
    }