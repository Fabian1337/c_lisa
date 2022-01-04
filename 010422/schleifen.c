#include <stdio.h>

int main()
{
    // Schleifen
    // for, while, do while, break, continue

    // Durchgänge durchläufe -> Wiederholung

    int i;
    i = 0;

    // while schleife
    // Wird erst geprüft und dann ggf. ausgeführt
    while (i < 0)
    {
        printf("\n%i", i);
        i++;
    }

    printf("\n---");

    i = 0; // zurücksetzten der zähler variable

    // do while schleife
    // Wird aufjedenfall einmal ausgeführt und dann geprüft
    do
    {
        printf("\n%i", i);
        i++;
    } while (i < 0);

    // For Schleife

    printf("\n---");

    for (i = 0; i < 10; i++)
    {
        for (int y = 0; y < 10; y++)
        {
            printf("\n%i", y);
        }
    }

    // Endlosschleife

    int gewinnzahl = 50, gewinnzahl2 = 60, fehlversuche = 0;
    int eingabe;
    int pruefung = 0;
    int checked1 = 0, checked2 = 0;

    while (1)
    {
        printf("Rate Zahl: \n");
        scanf("%i", &eingabe);

        if (eingabe == gewinnzahl && !checked1)
        {
            printf("zahl errraten");
            pruefung++;
            checked1++;

            if (pruefung == 2)
            {
                break; // beende schleife -> ende der schleife
            }

            continue; // springe zum schleifen anfang
            // break; // beende schleife -> ende der schleife
        }
        else if (eingabe == gewinnzahl2 && !checked2)
        {
            printf("zahl errraten");
            pruefung++;
            checked2++;

            if (pruefung == 2)
            {
                break; // beende schleife -> ende der schleife
            }

            continue; // springe zum schleifen anfang
            // break; // beende schleife -> ende der schleife
        }

        printf("leider falsch \n");
        fehlversuche++;
    } // schleifenende

    printf("\n fehlversuche %i", fehlversuche);
}