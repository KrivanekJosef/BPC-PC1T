
#pragma once
enum typOperace { soucet = 1, skalarniSoucin, vektorovySoucin };
struct vector3d
{
    double x;
    double y;
    double z;
};
struct vector3d operace(struct vector3d u, struct vector3d v, enum
typOperace typ) {
    switch (typ){
        case soucet:
            double soucetx = u.x + v.x;
            double soucety = u.y + v.y;
            double soucetz = u.z + v.z;
            return vector3d(soucetx, soucety, soucetz);
        case vektorovySoucin:
            double soucinx = u.y * v.z - u.z * v.y;
            double souciny = u.x * v.z - u.z * v.x;
            double soucinz = u.y * v.y - u.y * v.x;
            return vector3d(soucinx, souciny, soucinz);
    }
}
void tisk(struct vector3d w) {
    double velikost = sqrt(w.x*w.x + w.y*w.y + w.z*w.z);
    printf("w = (%lf, %lf, %lf)\n", w.x, w.y, w.z);
    printf("|w| = %lf\n", velikost);
}
