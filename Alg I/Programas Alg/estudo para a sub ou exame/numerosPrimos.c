#include <stdio.h>

    int calculaPrimo(int n)
    {
        int primo = 0;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                primo++;        
        }

        if (primo == 2)
            return 1;
        else
            return 0;  
    }

    int main()
    {
        int num;

        printf("Digite um numero: ");
        scanf("%d", &num);

        if(calculaPrimo(num))
            printf("O numero %d eh primo!\n", num);
        else    
            printf("O numero %d nao eh primo!\n", num);

        return 0;
    }