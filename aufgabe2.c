#include <stdio.h>

int main()
{
    int a, b, c, max;

    printf("\nBitte geben sie a ein: ");
    scanf("%i", &a);
    printf("\nBitte geben sie b ein: ");
    scanf("%i", &b);
    printf("\nBitte geben sie c ein: ");
    scanf("%i", &c);

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
}