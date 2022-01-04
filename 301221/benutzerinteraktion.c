#include <stdio.h>

int main()
{
    // Benutzereingabe

    // char auswahl;
    // printf("Wollen Sie die Installation starten ( Y/N ): ");
    // // getchar liest nur einen buchstaben ein
    // auswahl = getchar();

    // printf("Die Auswahl ist %c\n", auswahl);

    char vorname[100] = "";
    char nachname[100] = "";

    printf("Bitte geben Sie Ihren Vornamen ein: ");
    scanf("%s", &vorname);
    printf("Bitte geben Sie Ihren Nachnamen ein: ");
    scanf("%s", &nachname);

    printf("Vorname: %s, Nachname: %s", vorname, nachname);
}