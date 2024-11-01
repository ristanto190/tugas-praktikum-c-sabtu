#include <stdio.h>

int main() {
    int start, end, duration, fee;

    printf("Enter entry time (1-12): ");
    scanf("%d", &start);
    printf("Enter exit time (1-12): ");
    scanf("%d", &end);

    if (end >= start) {
        duration = end - start;
    } else {
        duration = (12 - start) + end;
    }

    if (duration <= 2) {
        fee = 2000;
    } else {
        fee = 2000 + (duration - 2) * 500;
    }

    printf("Lama parkir = %d jam, Biaya = %d\n", duration, fee);
    return 0;
}
