#include <stdio.h>

int main()
{
    int a, b = 5, c, d;
    a = b / 2; // a = ?
    printf("Ergebnis = %d\n", a);
    c = b % 2; // c = ?
    printf("Ergebnis = %d\n", c);
    d = b << a; // d = ?
    printf("Ergebnis = %d\n", d);
    b = 1 - --b; // b = ?
    printf("Ergebnis = %d\n", b);

    b *= -3; // b = ?
    printf("Ergebnis = %d\n", b);
    d %= 3; // d = ?
    printf("Ergebnis = %d\n", d);
    printf("----");
    c += b * d + 4; // c = ?
    printf("Ergebnis = %d\n", c);
    a = --b + d++; // a, b, d = ?
    printf("Ergebnis = %d\n", a);
}
