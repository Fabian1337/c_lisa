#include <stdio.h>

int main()
{
    int a = 2, b = 5, *c = &a, *d = &b;
    a = *c * *d;

    // a, b, *c, *d
    // 10, 5, 10, 5

    *d -= 3;
    b = a * b;
    c = d;
    b = 7;
    a = *c + *d;
}