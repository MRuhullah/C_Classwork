#include <stdio.h>

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

    // Input elements of the first matrix
    printf("Enter elements for the first matrix (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements for the second matrix (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the resulting matrix
    printf("\nThe resulting matrix after multiplication is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}