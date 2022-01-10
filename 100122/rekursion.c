#include <stdio.h>
#include <stdlib.h>

// Rekursion selbstaufrufen der funktion ( funktion ruft sich selber auf )

int eingabezahl()
{
    int eingabe=0;
    printf("\nBitte gebe eine positive Zahl ein: ");
    scanf("%i", &eingabe);

    // !() steht für nicht (Bedingung) also das ergebnis der bedingung wird negiert / verneint 
    if(!(eingabe >= 0)){
        printf("zahl ist kleiner 0");
        exit(0);
    }

    return eingabe;
}

int faku(int n){
    if (n == 1){
        return 1;
    }
    else{
        return n * faku(n-1);
    }
}

int main(){
    int eingabe= eingabezahl();
    int fak = faku(eingabe);

    printf("Die fakulteat ist: %i\n", fak);
}