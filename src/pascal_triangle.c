#include <stdio.h>

int binomialCoefficient(int n, int k);

int main() {
    int result = 0;
    int n;
    if (scanf("%d", &n) == 1 && n > 0 && n <= 30) {
        n--;
        for (int i = 0; i <= n; i++) {
            if (i != 0) printf(" ");
            printf("%d", binomialCoefficient(n, i));
        }
    } else {
        fprintf(stderr, "Puck you, Verter!");
        result = -1;
    }
    return result;
}
int binomialCoefficient(int n, int k) {
    if (k == 0 || n == k) return 1;
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}