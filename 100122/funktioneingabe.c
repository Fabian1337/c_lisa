#include <stdio.h>

int eingabezahl()
{
    int eingabe=0;
    printf("\nBitte gebe eine positive Zahl ein: ");
    scanf("%i", &eingabe);

    // !() steht für nicht (Bedingung) also das ergebnis der bedingung wird negiert / verneint 
    if(!(eingabe >= 0)){
        printf("zahl ist kleiner 0");
        return -1;
    }

    return eingabe;
}

int main()
{   
    // Addieren von zwei Zahlen

    int a, b;
    a = eingabezahl();
    b = eingabezahl();

    int summe = a+b;
    printf("\nSumme ist %i", summe);

    return 0;
}


