#include <stdio.h>

// Eindimensionale array
int main()
{
    int punkte[6] = {0};
    punkte[0] = 10;
    punkte[1] = 11;
    punkte[2] = 12;
    punkte[3] = 13;
    punkte[4] = 14;
    punkte[5] = 15;

    // Berechnung für die Array lenge
    int array_length = sizeof(punkte) / sizeof(punkte[0]);

    // output
    for (int i = 0; i < array_length; i++)
    {
        printf("%d\n", punkte[i]);
    }

    // berechnung mit den werten addition
    int summe = 0;
    // summe = punkte[0] + punkte[1] + punkte[2]
    for (int i = 0; i < array_length; i++)
    {
        summe = summe + punkte[i];
    }
    printf("Summe%d\n", summe);

    // Eingabe von 5 werten
    int werte[5] = {0};
    array_length = sizeof(werte) / sizeof(werte[0]);
    int temp;

    printf("array length: %d\n", array_length);

    for (int i = 0; i < array_length; i++)
    {
        scanf("%d", &werte[i]);
    }
    // ausgabe für werte
    for (int i = 0; i < array_length; i++)
    {
        printf("index %d wert: %d\n", i, werte[i]);
    }
}