#include <stdio.h>

int main() {
    int num = 1;
    for (int i = 0; i <= 10; i++) {
        printf("%d ", num);
        num *= 2;
    }
    return 0;
}