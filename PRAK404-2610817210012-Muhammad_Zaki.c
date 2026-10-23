#include <stdio.h>

int main() {
    int pilihan;
    float a, b;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Muhammad Zaki\n");
            break;
        } else if (pilihan < 1 || pilihan > 4) {
            printf("Input anda salah, silahkan coba lagi\n");
            continue;
        }

        printf("Masukkan nilai pertama : ");
        scanf("%f", &a);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &b);

        switch (pilihan) {
            case 1:
                printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", a, b, a + b);
                break;
            case 2:
                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", a, b, a - b);
                break;
            case 3:
                printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", a, b, a * b);
                break;
            case 4:
                if (b == 0) {
                    printf("Pembagian dengan nol tidak dapat dilakukan\n");
                } else {
                    printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", a, b, a / b);
                }
                break;
        }
    }
    return 0;
}