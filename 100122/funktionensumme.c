#include <stdio.h>

// Eigene Variablen sogenannte lokale variablen
// Funktionen schaffen ordnung im code
// Funktionen weniger wiederholung an code ( insgesamt code einsparung )
// Funktionen können geteilt werden
int berechne_summe(int a, int b)
{
    int summe = a + b;
    return summe;
}

int main()
{
    // Berechne die Summe mit hilfe der vorgegebenen funktion

    int summe = berechne_summe(54, 56);
    printf("\nsumme: %i", summe);

    // wenn int weg ist kann die summe ( die variable ) neu beschrieben werden ( überschrieben )
    summe = berechne_summe(987, 498);
    printf("\nsumme: %i", summe);

    summe = berechne_summe(231, 123);
    printf("\nsumme: %i", summe);

    return 0;
}