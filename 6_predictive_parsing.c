#include <stdio.h>

int main() {
    printf("LL(1) Parsing Table\n");
    printf("--------------------\n");
    printf("E -> T E'\n");
    printf("E' -> + T E' | ε\n");
    printf("T -> F T'\n");
    printf("T' -> * F T' | ε\n");
    printf("F -> (E) | id\n");

    return 0;
}