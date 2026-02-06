#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 0)
        printf("Fibonacci term = 0");
    else if (n == 1)
        printf("Fibonacci term = 1");
    else {
        for (i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Fibonacci term = %d", b);
    }

    return 0;
}
