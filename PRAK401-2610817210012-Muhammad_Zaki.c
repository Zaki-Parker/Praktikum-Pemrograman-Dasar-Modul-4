#include <stdio.h>

int main() {
    int multiples;
    char symbol;

    scanf("%d", &multiples);
    
    scanf(" %c", &symbol);

    for (int i = 1; i <= 50; i++) {
        if (i % multiples == 0) {
            printf("%c ", symbol);
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}