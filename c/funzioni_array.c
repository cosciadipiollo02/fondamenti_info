#include <stdio.h>
#define N 4

void modificaarray(int vett[], int dim);  // dim è la dimesnsione dell'array
void modificaint(int i);

int main(){
    int a = 0;
    int v[N] = {0,1,2,3};
    modificaint(a);              // a non viene modificata
    modificaarray(v,N);          // l'array viene modificato pechè viene passato il suo indirizzo
    printf(" a = %d \n",a);
    for(int i = 0; i < N; i++){
        printf ("%d \n", v[i]);
    }
    return 0;
}

void modificaint(int i){          
    i = i +100;
}
void modificaarray(int vett[], int dim){
    for(int i = 0; i < dim; i++){
        vett[i] += 100;
    }
}