int main(void) {
    int n;
    char palabra[105];
    int largo;
    scanf("%d", &n);

    for (int i=1; i<=n ; i++) {
        scanf("%s", palabra);

        largo=strlen(palabra);

        if (largo>10) {
            printf("%c%d%c", palabra[0], largo-2, palabra[largo-1]);
            printf("\n");
        } else {
            printf("%s", palabra);
            printf("\n");
        }
    }




    return 0;
}