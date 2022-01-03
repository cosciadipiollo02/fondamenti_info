#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30

typedef struct nodo{
        char *nome;
        float costo;
        int quantita;
        struct nodo *next;
    } nodo;

void stampalista(nodo *lista);
void eliminanodo(nodo *lista, nodo *nododaelim);
void elimina_elemento(nodo *lista, char *nome, int quantita);
void inserisci_elemento(nodo *lista, char *nome, int quantita, float costo);

int main(){
    int flag = 1;
    char nome[N];
    int quantita;
    float costo;
    nodo *lista = (nodo *) malloc(sizeof(nodo));
    lista = NULL;
    printf(" \n\n LISTA DELLA SPESA \n\n");
    while(flag){
        int scelta = 0;
        printf("premere \n1 per inserire un elemento\n2 per eliminare\n3 per stampare la lista \n4 per terminare il progrramma \n");
        scanf("%d", &scelta);
        if (scelta == 1){
            printf("inserire il nome, la quantita' e il costo del prodotto \n");
            scanf("%s %d %f", nome, &quantita, &costo);
            inserisci_elemento(lista, nome, quantita, costo);
        }
        else if (scelta == 2){
            printf("inserire il nome e la quantita del prodotto da eliminare \n");
            scanf("%s %d", nome, &quantita);
            elimina_elemento(lista, nome, quantita);
        }
        else if (scelta == 3){
            stampalista(lista);
        }
        else if (scelta == 4){
            flag = 0;
        }
        else{
            printf("numero non valido\n");
        }
    }
            


            


        


}

void stampalista(nodo *lista){

    nodo *temp = lista;
    while(temp != NULL){
        printf("prodotto %s costo %f quantita %d \n",temp->nome, temp->costo, temp->quantita);
        temp = temp->next;
    }
    float costototale = 0;
    nodo *temp1 = lista;
    while(temp1 != NULL){
        costototale += temp1->costo * temp1->quantita;
        temp1 = temp1->next;
    }
    printf("\n COSTO TOTALE : %f", costototale);
    printf(" \n\n");
}



void inserisci_elemento(nodo *lista, char *nome, int quantita,float costo){
    nodo *temp;
    temp = lista;
    int flag = 1;
    while(temp != NULL && flag){
        if(strcmp(temp->nome, nome) == 0){
            temp ->quantita += quantita;
            flag = 0;
        }
        temp = temp->next;
    }
    //mi riporto sull ultimo elemento della lista 
    temp = lista;
    while(temp->next != NULL){
        temp = temp->next;
    }
    // se l'elemento non e' nella lista lo aggiungo 
    if (flag){
        nodo *elemento = (nodo *)malloc(sizeof(nodo));
        temp->next = elemento;
        elemento->costo = costo;
        elemento->nome = nome;
        elemento->quantita = quantita;
    }
    //se la lista non esiste la aggiungo 
    if (temp == NULL){
        nodo *nuovalista = (nodo *)malloc(sizeof(nodo));
        nuovalista->costo = costo;
        nuovalista->nome = nome;
        nuovalista->quantita = quantita;
    }
}

void eliminanodo(nodo *lista, nodo *nododaelim){
    nodo *temp;
    temp = lista;
    if(lista == nododaelim){             //se mi trovo in testa alla lista elimino il nodo e basta
        free(nododaelim);

    }
    else {
        while(temp->next != nododaelim){
            temp = temp->next;
        }
        temp->next = nododaelim->next;
        free(nododaelim);
    }
}


void elimina_elemento(nodo *lista, char *nome, int quantita){
    nodo *temp;
    temp = lista;
    while (temp != NULL){
        if (nome == temp->nome){
            if (temp->quantita > quantita){
                temp->quantita -= quantita;
            }
            else{
            eliminanodo(lista, temp);
            }
        }
        temp = temp->next;
    }
}
            


    


