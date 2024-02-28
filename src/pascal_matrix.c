#include <stdio.h>

int binomialCoefficient(int n, int k);
void printMatrix(int n, int matrix[n][n]);

int main() {
    int size;
    if (scanf("%d", &size) == 1 && size > 0 && size <= 30) {
        int matrix[size][size];
        int count = 0;
        int n = 0;
        while (count < size * size) {
            for (int k = 0; k <= n; k++) {
                matrix[0][count] = binomialCoefficient(n, k);
                count++;
            }
            n++;
        }
        printMatrix(size, matrix);
    } else
        printf("Puck you, Verter!");
}

int binomialCoefficient(int n, int k) {
    if (k == 0 || n == k) return 1;
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}
void printMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j != 0) printf(" ");
            printf("%d", matrix[i][j]);
        }
        if (i != n - 1) printf("\n");
    }
}