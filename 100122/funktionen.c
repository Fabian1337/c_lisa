#include <stdio.h>

void darfsaufen(int alter)
{
    if (alter >= 18)
    {
        printf("\nJA SAUFEN! :3 ");
    }
    else
    {
        printf("\nNEIN ;( ");
    }
}

void darfsaufenamerika(int alter)
{
    if (alter >= 21)
    {
        printf("\nJA SAUFEN AMERIKA! :3 ");
    }
    else
    {
        printf("\nNEIN AMERIKA ;( ");
    }
}

// Funktion ( Main Funktion / Startpunkt unseres programms)
int main()
{
    // Anfang programms

    int alter = 18;
    darfsaufen(alter);
    darfsaufenamerika(alter);

    return 0; // Hier hören wir auf
}