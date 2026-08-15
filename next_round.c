#include <stdio.h>
#include <stdlib.h>




int main(void){
    int n, k, ganadores;
    ganadores=0;
    scanf("%d %d", &n, &k);
    int a[n+1];

    for (int i=1; i<=n; i++){
        scanf("%d", &a[i]);
        

    }
    for (int j=1; j<=n; j++){
        if (a[j]>=a[k] && a[j]>0){
            ganadores++;
        } 

    }
    printf("%d\n", ganadores);


    return EXIT_SUCCESS;
}