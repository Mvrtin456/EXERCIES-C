int main(void){
    int n, resultado;
     char X[100];
    resultado=0;
 
    scanf("%d", &n);
 
    for (int i=0; i<n; i++) {
        scanf("%s", &X);
        if (strcmp(X, "X++" )==0 || strcmp(X, "++X" )==0) {
            resultado++;
        } else if (strcmp(X, "--X")==0 || strcmp(X, "X--")==0){
        resultado--;
        }
    }
    printf("%d\n", resultado);
 
    return 0;
}