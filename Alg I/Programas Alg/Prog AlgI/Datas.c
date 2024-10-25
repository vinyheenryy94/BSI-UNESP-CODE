#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int dia1, dia2, mes1, mes2, ano1, ano2, aux_dia, aux_mes, aux_ano;

    // Entrada da primeira data
    printf ("Digite a primeira data: ");
    scanf ("%d %d %d", &dia1, &mes1, &ano1);

    // Entrada da segunda data
    printf ("Digite a segunda data: ");
    scanf ("%d %d %d", &dia2, &mes2, &ano2);

    // Verificando se na segunda entrada o dia eh maior que na primeira, se for troca
    if (dia2 > dia1)
    {
        aux_dia = dia1;
        dia1 = dia2;
        dia2 = aux_dia;
    }

    // Verificando se na segunda entrada o mes eh maior que na primeira, se for troca
    if (mes2 > mes1)
    {
        aux_mes = mes1;
        mes1 = mes2;
        mes2 = aux_mes;
    }

    // Verificando se na segunda entrada o ano eh maior que na primeira, se for troca
    if (ano2 > ano1)
    {
        aux_ano = ano1;
        ano1 = ano2;
        ano2 = aux_ano;
    }

    // Calculos (Considerando todos anos com 365 dias e todos meses com 30 dias)
    printf ("\nTotal aproximado dia(s): %d", (dia1 - dia2) + (mes1 - mes2) * 30 + (ano1 - ano2) * 365);
    // A diferenca entre os dias nunca sera 30, entao eh possivel desconsiderar
    printf ("\nTotal aproximado mes(es): %d", (mes1 - mes2) + (ano1 - ano2) * 12);
    printf ("\nTotal ano(s): %d\n", ano1 - ano2);

    /* O programa nao eh 100% preciso, 
    porque considera todos os anos com 365 dias e todos os meses com 30 dias, 
    alem de desconsiderar anos bissextos, mas essa seria a logica*/
    return 0;
}