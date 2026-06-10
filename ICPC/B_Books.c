#include <stdio.h>
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum > t)
            break;
        count++;
    }
    printf("%d", count);
}