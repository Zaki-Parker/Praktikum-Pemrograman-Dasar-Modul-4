#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    int genap;
    if (n % 2 == 0) {
        genap = n;
    } else {
        genap = n - 1;
    }

    for (int i = genap; i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}