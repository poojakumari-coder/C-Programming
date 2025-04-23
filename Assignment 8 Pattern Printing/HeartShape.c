#include <stdio.h>

int main() {
    int i, j;

    // Upper part of the heart
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 19; j++) {
            if ((j >= 4 - i && j <= 6 + i) || (j >= 14 - i && j <= 16 + i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Lower triangle part of the heart
    for (i = 1; i <= 10; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 21 - (2 * i); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
