#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char c;
    int count[256] = {0}; // array per contare ogni carattere
    fp = fopen("input.txt", "r"); // apri il file in modalità di lettura
    if (fp == NULL) { // controlla se esiste il file
        printf("File non trovato\n");
        exit(1);
    }
    while ((c = fgetc(fp)) != EOF) { // legge il file carattere per carattere
        count[(int) c]++; // aumenta contatore file
    }
    fclose(fp); // chiudi il file

    for (int i = 0; i < 256; i++) { // stampa il conteggio di ogni carattere
        if (count[i] > 0) {
            printf("Il carattere '%c' compare %d volte\n", i, count[i]);
        }
    }
    return 0;
}

