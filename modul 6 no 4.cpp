#include <stdio.h>

int main() {
    int kecepatan = 2; // meter/detik
    int waktu = 100;   // detik
    int jarak = kecepatan * waktu;
    
    printf("Jarak yang ditempuh setelah %d detik adalah %d meter\n", waktu, jarak);
    return 0;
}