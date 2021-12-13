#include <stdio.h>
#include <stdlib.h>
#include "mate.h"

int main(int argc, char *argv[]){
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    printf("la potenza dei due numeri è %d\n l' MCD è%d \n", potenza(num1, num2), MCD(num1, num2));
}