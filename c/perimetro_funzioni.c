#include <math.h>
#include <stdio.h>
#define N 5

typedef struct{
    float x;
    float y;
} punto;

float dist(punto p1, punto p2){
    return sqrt(pow(p1.x-p2.x,2) + pow(p1.y-p2.y,2));
    
}


float perimetro(punto poligono[], int dim){
    int i;
    float perim = 0;
    for (i = 0; i < dim; i++){
        perim = perim + dist(poligono[i-1], poligono[i]);
    }
    perim += dist(poligono[0],poligono[dim-1]);
    return perim;
}

