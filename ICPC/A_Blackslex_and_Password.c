#include <stdio.h>

int main() {
    int t, k, x;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &k, &x);
        printf("%d\n", k * x + 1);
    }
    return 0;
}
