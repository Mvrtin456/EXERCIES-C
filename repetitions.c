#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){

    int letra_ganadora, racha_actual;
    letra_ganadora=1;
    racha_actual=1;
    char texto, texto0;
    scanf("%c", &texto0);
    while((texto=getchar()) != '\n' && texto != EOF){
        if (texto0==texto){
            racha_actual++;
            if(racha_actual>letra_ganadora){
              letra_ganadora=racha_actual;  
            }
            
            texto0=texto;
            
        }else {
            racha_actual=1;
            texto0=texto;
        }
    }
    
    printf("%d", letra_ganadora);
    
    return EXIT_SUCCESS;
}