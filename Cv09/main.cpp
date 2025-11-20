#include <iostream>
#include <cmath>
#include "VectorMath.h"


int main() {

    struct vector3d vektor1;
    struct vector3d vektor2;
    enum typOperace typ;
    printf("Zadejte vektor1 ve formátu x, y, z: ");
    scanf("%lf %lf %lf", &vektor1.x, &vektor1.y, &vektor1.z);
    printf("Zadejte vektor2 ve formátu x, y, z: ");
    scanf("%lf %lf %lf", &vektor2.x, &vektor2.y, &vektor2.z);
    printf("Zadejte 1 pro soucet a 2 pro skalarní soucin a 3 pro vektorovy soucin");
    scanf("%d", &typ);
    struct vector3d vysledek = operace(vektor1, vektor2, typ);
    tisk(vysledek);
    return 0;
}