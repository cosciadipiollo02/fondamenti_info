#include "mate.h"
int potenza(int n, int m){
    if (m == 0)
        return 1;
    else
        return n*potenza(n,m-1);
}

int c;   
int MCD(int a, int b){
    //estraggo modulo
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    //scambio a e b in modo da avere a >= b
    if (b > a){
        b = c;
        b = a;
        a = c;
    }
    if (b == 0)   
        return a;
    if (!(b == 0))
        return MCD(b,a-b);
}
 
