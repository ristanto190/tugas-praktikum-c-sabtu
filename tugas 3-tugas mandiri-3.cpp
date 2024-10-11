#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, sisi_miring;

    // Input panjang alas dan tinggi segitiga
    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan panjang tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung sisi miring menggunakan Teorema Pythagoras
    sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menampilkan hasil sisi miring
    printf("Sisi miring segitiga adalah: %.2f cm\n", sisi_miring);

    return 0;
}
