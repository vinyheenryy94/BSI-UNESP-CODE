#include <stdio.h>
#include <math.h>

double fatorial (int n)
{
    int i, fat = 1;

    for (i = 1; i <= n; i++){
        fat *= i;
    }
    return fat;
}

int main()
{
    float num;
    double cosC, cosMaclaurin, dif;

    do
    {
        printf ("Digite um numero: ");
        scanf ("%f", &num);
    } while (num != 0.0 && num != 0.5 && num != 1.0 && num != 1.5 && num != 2.0 && num != 2.5 && num != 3.0);

    cosMaclaurin = 1 - (pow (num, 2) / fatorial (2)) + (pow (num, 4) / fatorial (4)) - (pow (num, 6) / fatorial (6)) + (pow (num, 8) / fatorial (8));

    printf ("Cosseno de Maclaurin para %.2f eh: %.4f", num, cosMaclaurin);

    cosC = cos(num);

    printf ("\nCosseno na linguagem C para %.2f eh: %.4f", num, cosC); 

    dif = cosC - cosMaclaurin;
    if (dif < 0)
        dif *= -1;

    printf ("\nDiferenca: %.4f\n", dif);
    
    return 0;
}