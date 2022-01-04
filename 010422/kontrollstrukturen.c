#include <stdio.h>

int main()
{
    // Kontrollstrukturen
    // if else,  switch case, break


    // int age, hight;
    // printf("Bitte geben sie ihr alter ein: \n");
    // scanf("%d", &age);
    // printf("Bitte geben sie ihr groesse ein: \n");
    // scanf("%d", &hight);

    // if(age >= 25){
    //     printf("größer 25\n");
    // }
    // else if (age <= 25)
    // {
    //     printf("kleiner 25\n");
    // }
    // else{
    //     printf("Falsche Eingabe\n");
    // }

    // if(age == 25) printf("a ist 25");

    // int x = 100;

    // if (x > 1)
    // {
    //     printf("x ist > 1\n");
    // }
    // else if (x > 2)
    // {
    //     printf("x ist > 2\n");
    // }

    // Verschachtelung

    int age;
    printf("Bitte geben sie ihr alter ein: \n");
    scanf("%d", &age);

    if (age < 110 && age > 0)
    {
        if (age >= 25)
        {
            printf("größer 25\n");
        }
        else if (age <= 25)
        {
            printf("kleiner 25\n");
        }
    }
    else
    {
        printf("Falsche Eingabe\n");
    }

}