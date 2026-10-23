#include <stdio.h>

int main() {
    int n, k, i, j;
    int jumlah, total = 0;

    scanf("%d", &n);
    scanf("%d", &k);

    for (i = 1; i <= n; i++) {
        jumlah = 0;
        for (j = i; j >= 1; j--) {
            printf("(%d * %d)", j, k);
            if (j > 1) {
                printf(" + ");
            }
            jumlah += j * k;
        }
        printf(" = %d\n", jumlah);
        total += jumlah;
    }

    printf("%d\n", total);
    return 0;
}