#include<stdio.h>
#define MAX_SIZE 100

int main(){
    int valore = 0, i=MAX_SIZE-1;
    char valoreconvertito[MAX_SIZE+1];
    valoreconvertito[MAX_SIZE] = '\0';
    printf("inserire valore in base dieci");
    scanf("%d",&valore);

    if (valore > 0){

        while (valore > 0) {
            if (valore % 2 == 0) {
                valoreconvertito[i]= '0';  
            }
            else {
                valoreconvertito[i]= '1';
            }
            valore = valore/2;   
            i--;
        }

        for (int j=i+1; valoreconvertito[j] != '\0'; j++) {
            printf("%c", valoreconvertito[j]);
        }
        printf("\n");

        char *stringa = "lamiastringa";
        for (int k=0; stringa[k] != 0; k++) {
            printf("%c", stringa[k]);
        }

        printf("Valore convertito: %s<<<\n", &(valoreconvertito[i+1]) );
    }
    else{
        printf("inserire un valore positivo");
    }
    
   
    
} 