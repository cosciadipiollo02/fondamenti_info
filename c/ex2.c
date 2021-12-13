#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 100
int main(){
    int *p = (int*) malloc(sizeof(int)*5);
    p[1] = 1;
    p[2] = 5;
    printf("%d\n%d",p[1],p[2]);
}