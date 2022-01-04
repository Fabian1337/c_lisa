#include <stdio.h>

int main()
{
    // Operatoren (Zuweisung und Rechenoperatoren)
    float a = 3, b = 5;
    float ergebnis;

    ergebnis = a + b;
    printf("PLus Ergebnis = %f\n", ergebnis);
    ergebnis = a - b;
    printf(" Minus Ergebnis = %f\n", ergebnis);
    ergebnis = a * b;
    printf("Mal Ergebnis = %f\n", ergebnis);
    ergebnis = a / b;
    printf("Geteilt Ergebnis = %.4f\n", ergebnis);

    ergebnis += b; // ergebnis = ergebnis + b;
    ergebnis -= b; // ergebnis = ergebnis + b;
    printf("+= Ergebnis = %.4f\n", ergebnis);

    // Teilen mit rest Modulo
    int wert_a_modulo = 3, wert_b_modulo = 5;
    int ergebnis_modulo;
    ergebnis_modulo = wert_a_modulo % wert_b_modulo;
    printf("Ergebnis = %i\n", ergebnis_modulo);
}