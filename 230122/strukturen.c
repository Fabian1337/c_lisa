#include <stdio.h>

struct person
{
    char *vorname;
    char *nachname;
    int alter;
};

struct datenpunkt
{
    int x;
    int y;
};

int main()
{
    int test = 1;
    struct person fabian;
    struct person lisa = {"lisa", "musterfrau", 123};

    struct person personen[10];

    fabian.vorname = "fabian";
    fabian.nachname = "mustermann";
    fabian.alter = 99;

    // ausgabe von einzelnen werten
    printf("%s", lisa.vorname);
}