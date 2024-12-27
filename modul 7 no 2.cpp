#include <stdio.h>

int main() {
    int A[11] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int hasil[11]; // Array untuk menyimpan bilangan genap
    int i, j = 0;

    // Proses penyaringan bilangan genap
    for (i = 0; i < 11; i++) {
        if (A[i] % 2 == 0) {
            hasil[j] = A[i];
            j++;
        }
    }

    // Cetak hasil
    printf("Bilangan genap yang disimpan dalam array:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", hasil[i]);
    }
    printf("\n");

    return 0;
}