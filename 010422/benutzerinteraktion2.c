#include <stdio.h>

int main()
{
//     int tag, monat, jahr;

//     printf("Bitte gebe dein Geburtsdatum ein: (tag.monat.jahr): ");
//     scanf("%d.%d.%d", &tag, &monat, &jahr);
//     printf("%02i.%02i.%04i", tag, monat, jahr);
// 

        // Verwendung der Variable temp um die Eingabe der Enter-Taste abzufangen
        // Enter gilt als eigenes Zeichen in der ASCCI tabelle

        char a, b, temp;

        printf("\na: ");
        scanf("%c%c", &a, &temp);

        printf("\nb: ");
        scanf("%c%c", &b, &temp); 

        printf("\na, b: %c , %c", a, b);
        printf("\na, b: %d , %d", a, b);
}