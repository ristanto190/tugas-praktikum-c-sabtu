#include <stdio.h>

int main() {
    int bilangan;

    // Input nilai bilangan bulat positif
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Memeriksa apakah bilangan ganjil atau genap
    if (bilangan % 2 == 0) {
        printf("GENAP\n");
    } else {
        printf("GANJIL\n");
    }

    return 0;
}
