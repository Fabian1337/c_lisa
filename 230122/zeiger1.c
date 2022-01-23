#include <stdio.h>

void pfsumme(int *a, int *b, int *summe)
{
    *summe = *a + *b;
}

int fsumme(int a, int b)
{
    return a + b;
}

int main()
{
    int zahl = 21;
    int *p;

    p = &zahl;

    printf("WERT: %d\n", *p);    // *p = wert von zahl
    printf("Addresse: %p\n", p); // p = addresse von zahl ( &zahl )

    int summe;
    int lisa;
    int a = 5, b = 6;
    pfsumme(&a, &b, &summe);
    printf("SUMME: %d\n", summe);

    return 0;
}