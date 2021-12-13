#include <stdio.h>
#include <string.h>

int main()
{

    FILE *fp;
    fp = fopen("provaa.txt","r");
    char tommy[40] = {0};
    fgets(tommy,30,fp);
    int lunghezza = strlen(tommy);
    printf("la frase è lunga %d\n",lunghezza);
    printf("La frase è %s\n",tommy);
    }