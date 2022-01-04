#include <stdio.h>

int main()
{
    // Kontrollstruktur switch case
    // springt zum entsprechenden wertepaar

    int a = 3;

    switch (a)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    case 3:
        printf("Deine eingabe war 3");
        break;
    default:
        printf("default"); // sprignt hier hin wenn keine der cases vorher vorgekommen ist
        break;
    }
}