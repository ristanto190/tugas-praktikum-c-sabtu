#include <stdio.h>

int main() {
    int code;
    char type;
    float price, discount, final_price;

    printf("Enter code: ");
    scanf("%d", &code);
    printf("Enter type (A/B/C): ");
    scanf(" %c", &type);
    printf("Enter price: ");
    scanf("%f", &price);

    switch (type) {
        case 'A':
            discount = 0.10;
            break;
        case 'B':
            discount = 0.15;
            break;
        case 'C':
            discount = 0.20;
            break;
        default:
            discount = 0.0;
            printf("Invalid item type.\n");
            return 1;
    }

    final_price = price * (1 - discount);
    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.2f\n", 
           type, discount * 100, final_price);
    return 0;
}
