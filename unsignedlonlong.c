#include <stdio.h>
 
int main(void){
    unsigned long long n;
    scanf("%llu", &n);
    if (n==1){
        printf("1");
        return 0;
    }
    do{
        printf("%llu ", n);
        if(n%2==0){
            
            n=n/2;
            
        }else {
            n=(n*3)+1;
          
        }
        
        
    }while(n!=1);
    printf("1");
    return 0;
}