#include <stdio.h>
#include <math.h>


void soucet( double a[2], double b[2], double c[2] ) {
    c[0] = a[0] + b[0]; // soucet realne slozky
    c[1] = a[1] + b[1]; // soucet imaginarni slozky
}

void rozdíl( double a[2], double b[2], double c[2] ) {
    c[0] = a[0] - b[0]; // rozdíl realne slozky
    c[1] = a[1] - b[1]; // rozdíl imaginarni slozky
}

void soucin ( double a[2], double b[2], double c[2] ) {
    c[0] = a[0]*b[0] - a[1]*b[1];
    c[1] = a[0]*b[1] + a[1]*b[0];
}

void tisk(double c[2]) {
    printf("Vysledek je %f + (%f) i\n", c[0], c[1]);
}

void tisk2 (double c[2] ) {
    double absolut = sqrt(c[0]*c[0] + c[1]*c[1]);
    double uhel = tan(c[1]/c[0])*(180.0/M_PI);
    printf("Vysledek je %f cos(%f) + sin(%f) i\n",absolut ,uhel, uhel);
}


int main(void) {
    double cislo1[2];
    double cislo2[2];
    double vysledek[2];
    char operace;

    printf("Zadej realnou slozku cisla 1: ");
    scanf("%lf",  &cislo1[0]);
    printf("Zadej imaginarni slozku cisla 1: ");
    scanf("%lf",  &cislo1[1]);

    printf("Zadej realnou slozku cisla 2: ");
    scanf("%lf",  &cislo2[0]);
    printf("Zadej imaginarni slozku cisla 2: ");
    scanf("%lf",  &cislo2[1]);

    printf("Zadejte operaci (+; -; *): ");
    scanf(" %c", &operace);
    if (operace == '+') {
        soucet(cislo1, cislo2, vysledek);
        tisk(vysledek);
        tisk2(vysledek);
    }
    else if (operace == '-') {
        rozdíl(cislo1, cislo2, vysledek);
        tisk(vysledek);
        tisk2(vysledek);
    }
    else if (operace == '*') {
        rozdíl(cislo1, cislo2, vysledek);
        tisk(vysledek);
        tisk2(vysledek);
    }
    else {
        printf(("Nesprávná operace"));
    }
    return 0;
}
