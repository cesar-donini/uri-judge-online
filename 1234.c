#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void main () {

    char palavra[200];
    int x, upperCase;

    while (fgets(palavra, sizeof palavra, stdin) != NULL) {
        upperCase = 1;

        for (x = 0; x < strlen(palavra); x++) {
            if (palavra[x] == ' ') {
                continue;
            }

            if (upperCase != 1) {
                palavra[x] = tolower(palavra[x]);
                upperCase = 1;
                continue;
            }

            palavra[x] = toupper(palavra[x]);
            upperCase = 0;
        }

        printf("%s", palavra);
    }

    printf("\n");
}