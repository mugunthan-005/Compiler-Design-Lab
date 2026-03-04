#include <stdio.h>
#include <string.h>

int main() {
    char re[20];
    int i;

    printf("Enter Regular Expression: ");
    scanf("%s", re);

    printf("\nNFA Transitions:\n");

    for(i = 0; i < strlen(re); i++) {
        printf("q%d -- %c --> q%d\n", i, re[i], i+1);
    }

    printf("\nStart State: q0");
    printf("\nFinal State: q%d\n", i);

    return 0;
}