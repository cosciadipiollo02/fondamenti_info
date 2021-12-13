#include <stdio.h>
#include <string.h>
#define MAX_SIZE 30


int main(){
    char parola1[MAX_SIZE],parola2[MAX_SIZE];
    int lunghezzaparola1, lunghezzaparola2, flag = 1, letterecommuni = 0;
    printf("inserire parola 1 \n");
    scanf("%s", parola1);
    printf("inserire parola 2 \n");
    scanf("%s", parola2);
    lunghezzaparola1 = strlen(parola1);
    lunghezzaparola2 = strlen(parola2);
    if(lunghezzaparola1 == lunghezzaparola2){     /*controlllo che le parole hanno le stesse lettere*/
        for (int conso_parola1 = 0; conso_parola1 < lunghezzaparola1; conso_parola1++){     /* faccio 2 cicli in modo da confrontare ogni lettera di una parola con quelle dell'altra*/
            for(int conso_parola2 = 0; conso_parola2 < lunghezzaparola2; conso_parola2++){
                if (parola1[conso_parola1]==parola2[conso_parola2]){  /*controllo se una lettera è uguale a un'altra*/
                    letterecommuni++;
                }
            }
        if (letterecommuni == 0){         /*se non ci sono lettere uguali la flag diventa false */
            flag = 0;
        }
        letterecommuni = 0;
        }
        
    }
    else{
        flag = 0;
    }
    if (flag){
        printf("la parola è un anagramma \n");
    }
    else {
        printf("la parola non è un anagramma \n");
    }
    
}