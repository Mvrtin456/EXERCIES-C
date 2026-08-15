#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void){
   int a, b;
   scanf("%d", &a);
   int jaja[a+1];
   memset(jaja , 0 , sizeof(jaja));
  
   for (int i=0; i<a-1; i++){
        scanf("%d", &b);
        jaja[b]=1;
   
   }
   for(int i=1; i<=a; i++){
    if(jaja[i]==0){
        printf("%d", i);
    }

   }


    return EXIT_SUCCESS;
}