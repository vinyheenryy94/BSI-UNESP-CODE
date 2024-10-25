#include <stdio.h>
#include <math.h>

#define MAX 15

int main()
{
    int num, i, aux;

    do
    {
        printf ("Entre com um numero: ");
        scanf ("%d", &num);
    } while (num <= 1);

    aux = num;
    
    for (i = 1; i < MAX; i++)
    {
        num = pow (num, i); 
        if (num >= 10000)
        {
            printf ("A potencia minima para %d ser maior ou igual a 10.000 eh: %d\n",aux ,i);
            break;
        }
        num = aux;
    }
    return 0;
}