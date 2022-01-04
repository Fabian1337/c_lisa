#include <stdio.h>
#define PIZ 3.1416

int main()
{

    // Variablen und Datentypen
    const float PI = 3.1416; // Konstante kann nicht verändert werden.
    int zahl = 213;
    float gleitkomma = 3.1775574464; // 32 bit
    double gleitkommal = 3.1415;     // 64 bit // long double = 128bit
    char zeichen = 'L';              // Ein Zeichen
    char name[100] = "LISA";         // Char Array mit länge von 100

    // Init
    int a = 1, b = 2, c = 3;
    char z = 'z', y = 'y';

    // Ausgabe der Datentypen
    printf("NAME: %s\n", name);
    printf("FLOAT: %f\n", gleitkommal);
    printf("NAME: %c\n", zeichen);
    printf("NAME: %i\n", zahl);

    return 0;
}