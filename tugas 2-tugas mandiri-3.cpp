#include <stdio.h>
#include <math.h>

int main() {
	
	float alas = 4.0;
	float tinggi = 5.0;
	float sisi_miring;
	
	sisi_miring = sqrt((alas *alas) + (tinggi * tinggi));
	
	printf("Panjang sisi miring segitiga adalah: %.2f cm\n", sisi_miring);
	
	return 0; 
}
