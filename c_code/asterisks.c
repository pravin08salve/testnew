#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces for the left side of the triangle
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print asterisks for the right side of the triangle
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}

