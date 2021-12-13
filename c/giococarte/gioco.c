#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *numeri_casuali(int numero_,int range_);

typedef struct{
    char valore;
    char seme;
} Carta;
Carta mazzo[52];
Carta mazzetto[21];
char semi[4] = {'C','Q','F','P'};
char valori[13] = {'1','2','3','4','5','6','7','8','9','D','J','Q','K'};
int contatore = 0;

int main(){
    srand(time(NULL));
    printf("\n\n                     Scegli una carta \n\n"); 
    for(int contseme = 0; contseme < 4; contseme++){                        //creo mazzo di carte
        for(int contavalore = 0 ; contavalore < 13 ; contavalore++){
            mazzo[contatore].seme = semi[contseme];
            mazzo[contatore].valore = valori[contavalore];
            contatore++;
        }   
    }
    int *numcasuali = numeri_casuali(21,51);
    for(int i = 0; i < 21; i++){                        //uso i numeri casuali per creare un mazzetto da 21 carte presse a caso dal mazzo di 51
       int contat = numcasuali[i];
       mazzetto[i].seme = mazzo[contat].seme;
       mazzetto[i].valore = mazzo[contat].valore;
    }
    for(int i = 0; i < 21; i++){
        printf("%c%c  ", mazzetto[i].seme,mazzetto[i].valore);     
    }

    printf("\n\n            Dimmi in che mazzo si trova  \n\n ");

    char matrice[7][6];                 //costruisco matrice con i 3 mazzetti di carte
    int l = 0;
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 6; j += 2){
            matrice[i][j] = mazzetto[l].seme;
            matrice[i][j+1] = mazzetto[l].valore;
            l++;
        }
    }


    for(int i = 0; i < 7; i++){        //stampo la matrice
        printf("\n");
        for(int j = 0; j < 6; j++){
            if(j % 2 == 0){
                printf("  ");
            }
            printf("%c",matrice[i][j]);
        }
    }
    printf("\n\n ");
    

    int colonnascelta;                // creo 3 variabili in cui metto il numero della colonna scelta e i numeri delle altre 2
    int altracolonna1;
    int altracolonna2;
    scanf("%d",&colonnascelta);

   switch (colonnascelta) {
   case 1 :
       altracolonna1 = 2;
       altracolonna2 = 3;
       break;
    case 2 :
        altracolonna1 = 1;
        altracolonna2 = 3;
        break;
    case 3 :
        altracolonna1 = 1;
        altracolonna2 = 2;
        break;
    default:
        printf("Inserire un numero valido\n");
        return 0;
        break;
    }


    char colonna_scelta[7][2];               //creo una matrice per la colonna scelta e le assegno i valori della matrice di partenza
    for(int i = 0; i < 7; i++){
        colonna_scelta[i][0]= matrice[i][(colonnascelta*2)-2];    // dato che la matrice ha 3 colonne ma in realtà ne ha 6 perchè ogli colonna contiene 2 elementi
        colonna_scelta[i][1] = matrice[i][(colonnascelta*2)-1];  // devo moltiplicare per 2 le colonne 
    }

    int altra_colonna1[7][2];
    for(int i = 0; i < 7; i++){
        altra_colonna1[i][0]= matrice[i][(altracolonna1*2)-2];
        altra_colonna1[i][1] = matrice[i][(altracolonna1*2)-1];
    }

    int altra_colonna2[7][2];
    for(int i = 0; i < 7; i++){
        altra_colonna2[i][0]= matrice[i][(altracolonna2*2)-2];
        altra_colonna2[i][1] = matrice[i][(altracolonna2*2)-1];
    }
    
    //creo mazzetto con la colonna scelta al mezzo
    for(int i = 0; i < 7; i++){
        mazzetto[i].seme = altra_colonna1[i][0];
        mazzetto[i].valore = altra_colonna1[i][1];
    }

    for(int i = 7; i < 14; i++){
        mazzetto[i].seme = colonna_scelta[i-7][0];
        mazzetto[i].valore = colonna_scelta[i-7][1];
    }

    for(int i = 14; i < 21; i++){
        mazzetto[i].seme = altra_colonna2[i-14][0];
        mazzetto[i].valore = altra_colonna2[i-14][1];
    }

    //ricostruisco matrice con i 3 mazzetti di carte

    l = 0;
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 6; j += 2){
            matrice[i][j] = mazzetto[l].seme;
            matrice[i][j+1] = mazzetto[l].valore;
            l++;
        }
    }
    printf("\n\n            Dimmi in che mazzo si trova  \n\n ");
    
    //ripeto tutto per 3 volte
    for(int i = 0; i < 7; i++){
        printf("\n");
        for(int j = 0; j < 6; j++){
            if(j % 2 == 0){
                printf("  ");
            }
            printf("%c",matrice[i][j]);
        }
    }
    printf("\n\n");


    scanf("%d",&colonnascelta);

   switch (colonnascelta) {
   case 1 :
       altracolonna1 = 2;
       altracolonna2 = 3;
       break;
    case 2 :
        altracolonna1 = 1;
        altracolonna2 = 3;
        break;
    case 3 :
        altracolonna1 = 1;
        altracolonna2 = 2;
        break;
    default:
        printf("Inserire un numero valido\n");
        return 0;
        break;
    }


    for(int i = 0; i < 7; i++){
        colonna_scelta[i][0]= matrice[i][(colonnascelta*2)-2];
        colonna_scelta[i][1] = matrice[i][(colonnascelta*2)-1];
    }

    for(int i = 0; i < 7; i++){
        altra_colonna1[i][0]= matrice[i][(altracolonna1*2)-2];
        altra_colonna1[i][1] = matrice[i][(altracolonna1*2)-1];
    }


    for(int i = 0; i < 7; i++){
        altra_colonna2[i][0]= matrice[i][(altracolonna2*2)-2];
        altra_colonna2[i][1] = matrice[i][(altracolonna2*2)-1];
    }
    
    //creo mazzetto con la colonna scelta al mezzo
    for(int i = 0; i < 7; i++){
        mazzetto[i].seme = altra_colonna1[i][0];
        mazzetto[i].valore = altra_colonna1[i][1];
    }

    for(int i = 7; i < 14; i++){
        mazzetto[i].seme = colonna_scelta[i-7][0];
        mazzetto[i].valore = colonna_scelta[i-7][1];
    }

    for(int i = 14; i < 21; i++){
        mazzetto[i].seme = altra_colonna2[i-14][0];
        mazzetto[i].valore = altra_colonna2[i-14][1];
    }

                //costruisco matrice con i 3 mazzetti di carte
    l = 0;
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 6; j += 2){
            matrice[i][j] = mazzetto[l].seme;
            matrice[i][j+1] = mazzetto[l].valore;
            l++;
        }
    }

    printf("\n\n            Dimmi in che mazzo si trova  \n\n ");

    for(int i = 0; i < 7; i++){
        printf("\n");
        for(int j = 0; j < 6; j++){
            if(j % 2 == 0){
                printf("  ");
            }
            printf("%c",matrice[i][j]);
        }
    }
    printf("\n\n");
   

   scanf("%d",&colonnascelta);

   switch (colonnascelta) {
   case 1 :
       altracolonna1 = 2;
       altracolonna2 = 3;
       break;
    case 2 :
        altracolonna1 = 1;
        altracolonna2 = 3;
        break;
    case 3 :
        altracolonna1 = 1;
        altracolonna2 = 2;
        break;
    default:
        printf("Inserire un numero valido\n");
        return 0;
        break;
    }


    for(int i = 0; i < 7; i++){
        colonna_scelta[i][0]= matrice[i][(colonnascelta*2)-2];
        colonna_scelta[i][1] = matrice[i][(colonnascelta*2)-1];
    }

    for(int i = 0; i < 7; i++){
        altra_colonna1[i][0]= matrice[i][(altracolonna1*2)-2];
        altra_colonna1[i][1] = matrice[i][(altracolonna1*2)-1];
    }


    for(int i = 0; i < 7; i++){
        altra_colonna2[i][0]= matrice[i][(altracolonna2*2)-2];
        altra_colonna2[i][1] = matrice[i][(altracolonna2*2)-1];
    }
    
    //creo mazzetto con la colonna scelta al mezzo
    for(int i = 0; i < 7; i++){
        mazzetto[i].seme = altra_colonna1[i][0];
        mazzetto[i].valore = altra_colonna1[i][1];
    }

    for(int i = 7; i < 14; i++){
        mazzetto[i].seme = colonna_scelta[i-7][0];
        mazzetto[i].valore = colonna_scelta[i-7][1];
    }

    for(int i = 14; i < 21; i++){
        mazzetto[i].seme = altra_colonna2[i-14][0];
        mazzetto[i].valore = altra_colonna2[i-14][1];
    }

                //costruisco matrice con i 3 mazzetti di carte
    l = 0;
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 6; j += 2){
            matrice[i][j] = mazzetto[l].seme;
            matrice[i][j+1] = mazzetto[l].valore;
            l++;
        }
    }

    printf("\n\n     La tua carta è %c%c\n\n",mazzetto[10].seme,mazzetto[10].valore);

    
}
int *numeri_casuali(int numero_,int range_){
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



