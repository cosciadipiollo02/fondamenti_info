#include <stdio.h>
int main(){
    float matrice[3][3] = {{3.2,2.3,3.4},{4.3,4.3,2.4},{5.4,5.2,3.2}};
    float matricefinale[3][3];
    filtro(3,3,matrice[][3],matricefinale[][3]);

}

void filtro( int r, int c,float iniziale[][c], float risultato[][c]){
    int i, j, si, sj;
    float somma = 0.0f;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            for(si = i-1; si < i+1; si++){
                for(sj = j-1; sj < j+1; sj++){
                    if((si < 0 || si > r) && (sj < 0 || sj > c)){  
                        somma += 0.0f;
                    }
                    else{
                        somma += iniziale[si][sj];
                    }
                }
            }
        risultato[i][j] = somma/(r*c);
        somma = 0.0f;
        }
    }

}