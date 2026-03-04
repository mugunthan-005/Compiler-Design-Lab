#include <stdio.h>

int main() {
    int n;
    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("\nDFA States:\n");
    for(int i = 0; i < n; i++) {
        printf("State q%d\n", i);
    }

    printf("\nConversion Completed.\n");
    return 0;
}