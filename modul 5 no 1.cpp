#include <stdio.h>

int main() {
    int start, end, duration;

    printf("Enter start time (1-12): ");
    scanf("%d", &start);
    printf("Enter end time (1-12): ");
    scanf("%d", &end);

    if (end >= start) {
        duration = end - start;
    } else {
        duration = (12 - start) + end;
    }

    printf("Lama bekerja = %d jam\n", duration);
    return 0;
}
