#include <stdio.h> 
#include <stdlib.h>
#define N 100
#define M 100


int main(){
    FILE* file = fopen("es2file.txt","r");
    int righe = getc(file)-'0';
    fseek(file,1,SEEK_CUR);
    int colonne = getc(file)- '0';
    char matrice[N][M];


    printf("%d   %d",righe,colonne);

    for(int i = 0; i < righe; i++){
        for(int j = 0; j < righe; j++){

            fscanf(file,"%c",&matrice[i][j]);
        }
    }

    for(int i = 0; i < colonne; i++){
        for(int j = 0; j < righe; j++){
           printf("%c",matrice[i][j]); 
        }
    }
    ciao

    
}
