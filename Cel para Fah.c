#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Cel = 0, Fah = 0;

    printf ("Escreva a temperatura em Celsius:");
    scanf ("%f", &Cel);

    Fah = (Cel * 9/5) + 32;

    printf("%.2f * 9/5) + 32 = %.2f", Cel, Fah);
    return 0;
}
