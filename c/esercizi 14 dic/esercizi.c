#include <stdio.h>

void stringaricoriva(char stringa[]);
int main(){
    char ciao = "ciao";
    stringaricoriva(ciao);

}

void stringaricorsiva(char stringa[]){
   if(stringa[0] != '\0'){
       stringaricoriva(&stringa[1]);
       printf("%c",stringa[0]);
   }
}
