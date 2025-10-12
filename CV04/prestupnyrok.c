#include <stdio.h>


int isEven(int rok) {
    if (rok % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int jePrestupny(int rok) {
    if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {

    int rok;
    printf("Zadej rok: ");
    scanf("%d", &rok);
    printf("%d,%s\n", rok, "ahoj");
    printf("%d,%d\n", rok, jePrestupny(rok));


    return 0;
}
