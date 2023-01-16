#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *cambiamatrice(int matrice[][5], int incremento);
int main() {
    int matrice[5][5];
    int intero;
    printf("inserire valore\n");
    scanf("%d", &intero);
    int incremento  = intero;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matrice[i][j] = incremento;
            incremento += 1;
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
    int *nuovamatrice= cambiamatrice( matrice, intero);
    printf("\n\n\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", nuovamatrice[i*5 + j]);
        }
    printf("\n");
    }

}
int *cambiamatrice(int matrice[][5], int incremento){
    int *nuovamatrice = (int*) malloc(sizeof(int)*25);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrice[i][j]%2 != 0){
                nuovamatrice[i * 5 + j] = matrice[i][j] + incremento;
            }
            else{
                nuovamatrice[i * 5 +j] = matrice[i][j];
            }
        }
    }
    return nuovamatrice;
} 
