#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    while (n--)
    {
        int r;
        scanf("%d", &r);
        int arr[r];
        int pos;
        for (int i = 0; i < r; i++)
        {
            scanf("%d", &arr[i]);
        }

        int check = 1;
        for (int i = 0; i < r; i++)
        {
            if (i == 0)
            {
                if (arr[i] < arr[i + 1])
                {
                    for (int j = 1; j < r; j++)
                    {
                        if (arr[i] == arr[j])
                        {
                            check = 0;
                        }
                    }
                    if(check == 1){
                        pos = 1;
                        break;
                    }
                }
                else {
                    check = 0;
                }
            }
            else
            {
                if (arr[i] < arr[i + 1] && arr[i] > arr[i - 1])
                {
                    for (int j = 0; j < r; j++)
                    {
                        if ((i != j ) && arr[i] == arr[j])
                        {
                            check = 0;
                            break;
                        }
                        else{
                            check = 1;
                            pos = i+1;
                        }
                    }
                    if(check == 1) break;
                    

                }
                // else {
                //     check = 0;
                // }
            }
        }
        if (check == 1)
        {
            printf("%d", pos);
        }
        else{
            printf("Humanity is doomed!");
        }
    }
    return 0;
}