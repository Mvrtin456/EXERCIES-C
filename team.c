#include <stdio.h>
#include <string.h>
 
 
int main(void){
    int problema, solucion;
    char opcion1[4]="011";
    char opcion2[4]="110";
    char opcion3[4]="101";
    char opcion4[4]="111";
    char opiniones[5];
    scanf("%d", &problema);
    solucion=0;
    for ( int i=0;i<problema;i++) {
        scanf(" %c %c %c", &opiniones[0], &opiniones[1], &opiniones[2]);
 
 
        if (opiniones[0] == opcion1[0] && opiniones[1] == opcion1[1] && opiniones[2] == opcion1[2] || opiniones[0] == opcion2[0] && opiniones[1] == opcion2[1] && opiniones[2] == opcion2[2] || opiniones[0] == opcion3[0] && opiniones[1] == opcion3[1] && opiniones[2] == opcion3[2] || opiniones[0] == opcion4[0] && opiniones[1] == opcion4[1] && opiniones[2] == opcion4[2]) {
                solucion=solucion+1;
        } else {
            solucion=solucion+0;
        }
        solucion=solucion+0;
    }
    printf("%d\n", solucion);
 
    return 0;
}