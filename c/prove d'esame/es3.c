#include <stdio.h>
#define N 3

int a [N][N] = {{3,4,4},{4,4,5},{4,4,3}};

int sommamatrice(int matrice[][N], int dimensione);


int main(){
    int sommatoria = sommamatrice(a,3);
    printf("%d \n", sommatoria);
} 

int sommamatrice(int matrice[][N], int dimensione){
    int somma = 0 ;
    if (dimensione == 0){
        return matrice[0][0] + matrice[0][1] + matrice[0][2];
    }
    else {
        for(int i = 0; i < 3; i++){
            somma += matrice[dimensione][i];
        }
    }
    return somma + sommamatrice(matrice , dimensione-1);
    
    
}