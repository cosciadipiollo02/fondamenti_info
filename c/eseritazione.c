#include <stdio.h>
#define GIORNI 7

int main(){
    int istogramma;
    float temperature[GIORNI];
    for (int i= 1; i <= GIORNI;i++){
        printf("inserire temperature del giorno %d \n",i);
        scanf("%f",&temperature[i]);
    }
    printf("GIORNO\tTEMPERATURA\tISTOGRAMMA\n");
    for (int i= 1; i <= GIORNI;i++){
        istogramma = temperature[i] - 34;
        printf("%d\t%f\t",i,temperature[i]);
        for(int l = 1;l <= istogramma; l++){
            printf("*");
        }
        printf("\n");
    }
for(int i; i < 5; i++){






}