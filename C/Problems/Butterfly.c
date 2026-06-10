#include <stdio.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    /* validate: N must be odd and >= 5 */
    if (N < 5 || (N % 2) == 0) {
        printf("N must be odd and >= 5\n");
        return 0;
    }

    int mid = N / 2; /* integer division, middle row index (0-based) */

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j == i || j == (N - 1 - i) || i == mid)
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
