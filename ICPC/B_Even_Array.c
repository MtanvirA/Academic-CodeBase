#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int t;
        scanf("%d", &t);
        int arr[t];
        int even = 0;
        int odd = 0;

        for (int i = 0; i < t; i++)
        {
            scanf("%d", &arr[i]);
            if ((i % 2 != 0) && (arr[i] % 2 == 0))
            {
                even++;
            }
            else if ((i % 2 == 0) && (arr[i] % 2 != 0))
            {
                odd++;
            }
        }

        if(even == odd)
        {
            printf("%d\n", even);
        }
        else
        {
            printf("%d\n", -1);
        } 

    }
    return 0;
}