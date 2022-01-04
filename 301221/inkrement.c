#include <stdio.h>

int main()
{
    // Inkrement
    int a = 0;

    a++; // a = a + 1 --- a(0)++ -> a(0)+1 -> a(1) // 0+1
    a = a + 1;

    a--; // a = a - 1 --- a(1)-- -> a(1)-1 -> a(0) // 1-1
    a = a - 1;

    printf("A = %i\n", a);

    // Inkrement position

    int z = 5, y;
    y = ++z; // y = z++;
    printf("A = %i\n", y);

    // Rechnen
    int alter = 25, matrikelnummer = 10;
    int test = (alter + matrikelnummer) * alter;

    printf("ergebnis: %i", test);
}