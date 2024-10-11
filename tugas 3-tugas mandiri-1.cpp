#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, luas, keliling, sisi_miring;

    // Input panjang alas dan tinggi segitiga
    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;

    // Menghitung sisi miring (misal segitiga siku-siku)
    sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menghitung keliling segitiga
    keliling = alas + tinggi + sisi_miring;

    // Menampilkan hasil luas dan keliling segitiga
    printf("Luas segitiga: %.2f cm^2\n", luas);
    printf("Keliling segitiga: %.2f cm\n", keliling);

    return 0;
}
