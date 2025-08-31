#include <stdio.h>

int main() {
    // Using for loop
    printf("Numbers from 1 to 10 using for loop:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // Using while loop
    printf("Numbers from 1 to 10 using while loop:\n");
    int j = 1;
    while (j <= 10) {
        printf("%d ", j);
        j++;
    }
    printf("\n\n");

    // Using do-while loop
    printf("Numbers from 1 to 10 using do-while loop:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 10);
    printf("\n");

    return 0;
}