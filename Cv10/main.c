#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int main() {
    FILE *fin = fopen("C:\\Users\\42077\\Desktop\\vstup.txt", "r");
    FILE *fout = fopen("C:\\Users\\42077\\Desktop\\vysledky.txt", "w");

    if (!fin) {
        printf("Nelze otevrit soubor C:/vstup.txt");
        return 1;
    }
    if (!fout) {
        printf("Nelze otevrit soubor D:/vysledky.txt");
        fclose(fin);
        return 1;
    }

    int ch;            /* aktuálně načtený znak (uložený jako int kvůli EOF) */
    int letters = 0;   /* počet písmen */
    int digits = 0;    /* počet číslic */
    int words = 0;     /* počet slov */
    int sentences = 0; /* počet vět */
    int in_word = 0;   /* příznak: právě se nacházíme uvnitř slova? (1 = ano, 0 = ne) */


    while ((ch = fgetc(fin)) != EOF) {
        if (isalpha(ch)) {
            letters++;
        }
        if (isdigit(ch)) {
            digits++;
        }


        if (isspace(ch)) {
            if (in_word) {
                words++;
                in_word = 0;
            }
        }
        else {
            if (!in_word && (isalpha(ch) || isdigit(ch))) {
                in_word = 1;
            }
        }

        if (ch == '.') {
            sentences++;
        }
    }

    if (in_word) words++;


    printf("Pocet pismen: %d\n", letters);
    printf("Pocet cislic: %d\n", digits);
    printf("Pocet slov: %d\n", words);
    printf("Pocet vet: %d\n", sentences);


    fprintf(fout, "Pocet pismen: %d\n", letters);
    fprintf(fout, "Pocet cislic: %d\n", digits);
    fprintf(fout, "Pocet slov: %d\n", words);
    fprintf(fout, "Pocet vet: %d\n", sentences);

    
    fclose(fin);
    fclose(fout);

    return 0;
}
