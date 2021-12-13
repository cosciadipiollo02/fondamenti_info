#include <stdio.h>
#include <string.h>
int main(){
    FILE *fp;
    fp = fopen("testo_triangolo_latino.txt","r");
    char tommy[40] = {0};
    int N ;
    fscanf(fp,"%d",&N);
    int matrice[N][N];


    int contatore = 0;
    int flag = 1;
    char range[N];

    
    for (size_t i = 0; i < N; i++)            //inizializzo matrice con valori 00
    {
        for (size_t j = 0; j < N; j++)
        {
          matrice[i][j]=0;  
        }
    }
    fseek(fp,2,SEEK_SET);                 // passo alla seconda riga

    for(int r = 0; feof(fp)==0; r++)
    {
         fgets(tommy,30,fp);                //prendo valori righe
         int lunghezza = strlen(tommy);
         for (size_t i = 0; i < N; i++)     //assegno alla matrice gli elementi della riga
         {
            matrice[r][i] = tommy[i];    
         }      
    }
  // printf("%c",matrice[0][0]);
  for(int i = 0; i < N; i++){
    for(int j =0; j < N; j++){
      printf("%c",matrice[i][j]);
    }
    printf("\n");
  }
  // veerifico se è un quadrato latino
  
  for(int a = 0; a < N; a++){
    range[a]= a+49;
    }


  for(int i = 0; i < N; i++){ //righe
    printf("riga %d ",i);
    for(int a = 0; a < N; a++){   // iniziallizzo array int range 123...N
      range[a]= a+49;
      }
    for(int j =0; j < N; j++){ //elemento riga
      for(int k = 0; k < N; k++){  //controllo che i numeri siano 123...N
        // aggiungo a contatore ogni volta che è compreso tra 1-4
        if(matrice[i][j] == range[k]){
          contatore++;
          range[k] = 0;           //elimino il numero da range se è stato utilizato
        }
      }
     }
    printf("   contatatore  %d",contatore);
    if (!(contatore == N)){             //controllo che per ogni riga il contatore sia 4
      flag = 0; 
    }
    printf(" flag %d \n",flag);
    contatore = 0;                 //azzero contatore
  }






   for(int j = 0; j < N; j++){ //colonne
    printf("colonna %d ",j);
    for(int a = 0; a < N; a++){   // iniziallizzo array int range 123...N
      range[a]= a+49;
      }
                                    
    for(int i =0; i < N; i++){ //elemento colonna
      for(int k = 0; k < N; k++){  //controllo che i numeri siano 123...N
        // aggiungo a contatore ogni volta che è compreso tra 1-4
        if(matrice[i][j] == range[k]){
          contatore++;
          range[k] = 0;          //elimino il numero da range se è stato utilizato
        }
      }
     }
    printf("   contatatore  %d",contatore);
    if (!(contatore == N)){             //controllo che per ogni colonna il contatore sia 4
      flag = 0; 
    }
    printf(" flag %d \n",flag);
    contatore = 0;                 //azzero contatore
  }







  if (flag)
    printf("la matrice è un triangolo latino \n" );
    
}