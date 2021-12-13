#include<stdio.h>
#include <string.h>
#define VAL_MAX 100

int main(){
    int flag = 0, contatore = 0, lunghezzabin, risultato = 0, potenza = 1, binario;
    char bin[VAL_MAX];
    printf("inserire valore in base 2 \n");
    scanf("%s",bin);
    lunghezzabin = strlen(bin);
    for (contatore; contatore < lunghezzabin; contatore++) {
        if (bin[contatore] != 48 && bin[contatore] != 49) {
            printf("il numero non è in base 2 \n");
            flag = 1;
            break;
        }  
    }
    if (!flag){
    contatore = lunghezzabin -1;

    for(contatore; contatore >= 0; contatore--) {
        if (bin[contatore] == 48){
            binario = 0;
        }

        else {
            binario = 1;
        }
        risultato += binario * potenza;
        potenza = potenza * 2;
        
    }
    printf("il numero %s in base 10 è %d \n\n",bin, risultato);
    }
    
   
    {
        
    }
     
}