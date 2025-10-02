#include <stdio.h>

int main()
{
    int rychlost_zvuku = 340;
    double cas;
    double vzdalenost;

    printf("Zadej dobu (v sekundach): ");
    scanf("%lf", &cas);  

    vzdalenost = cas * rychlost_zvuku;

    printf("Blesk uhodil %.2f metru daleko.\n", vzdalenost);

    return 0;
}
