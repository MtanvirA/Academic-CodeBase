#include <stdio.h>
int main()
{
    int x = 947;
    int z = x;
    int y = 0;
    while (x > 0)
    {
        y = y * 10 + x % 10;
        x = x/10;
    }
    printf("%d", y);
    return 0;
}