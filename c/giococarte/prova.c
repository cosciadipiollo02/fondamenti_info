#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int *numericasuali(int numero_,int range_);

int main(){
    int* n = numericasuali(10,20);
    for(int i = 0; i < 10; i++){
        printf("%d ",n[i]);
        
    }
}

int *numericasuali(int numero_,int range_){
    srand(time(NULL));
    // printf("%d,%d",numero_,range_);
    int flag = numero_;
    int numerocasuale;
    int *numcasuali = malloc(sizeof(int)*range_);

    for(int i = 0; i < numero_; i++){
        // printf("\n\nelemento %d",i);   
        while(flag != 0){                            // genero 21 numeri casuali da 0 a 51
            numerocasuale = rand() % range_;
            flag = numero_;
            //  printf(" numero %d",numerocasuale);
            for(int d = 0; d < numero_; d++){
                if(numerocasuale != numcasuali[d])
                    flag--;
            }
            //  printf(" flag = %d ",flag);
        }
        
        numcasuali[i] = numerocasuale;
        //  printf(" %d",numcasuali[i]);
        flag = numero_;
        //  printf("%d \n", numcasuali[i]);
    }
    return numcasuali;
}