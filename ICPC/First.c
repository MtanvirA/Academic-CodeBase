#include <stdio.h>

int main()
{
    {

        long long int n;
        scanf("%lld", &n);
        while (n--)
        {

            long long int a, b;
            long long int arr[1000];

            scanf("%lld %lld", &a, &b);

            for (int i = 0; i < a; i++)
            {
                scanf("%lld ", &arr[i]);
            }

            for (int i = 0; i < b; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    scanf("%lld", &arr[i]);
                }
            }

            printf("%lld\n", a + b);
        }
    }
    return 0;
}