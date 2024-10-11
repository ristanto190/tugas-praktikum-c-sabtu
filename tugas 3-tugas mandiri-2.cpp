#include <stdio.h>

int main() {
    int suhu_celcius;
    float suhu_fahrenheit, suhu_reamur;

    // Input suhu dalam Celcius
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%d", &suhu_celcius);

    // Menghitung suhu dalam Fahrenheit
    suhu_fahrenheit = (suhu_celcius * 9.0 / 5.0) + 32;

    // Menghitung suhu dalam Reamur
    suhu_reamur = suhu_celcius * 4.0 / 5.0;

    // Menampilkan hasil konversi
    printf("Suhu dalam Fahrenheit: %.2f derajat\n", suhu_fahrenheit);
    printf("Suhu dalam Reamur: %.2f derajat\n", suhu_reamur);

    return 0;
}
