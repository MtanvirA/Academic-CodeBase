#include <stdio.h>
#include <string.h>
int main()
{
    char ex[100];

    typedef struct player
    {
        char firstName[50];
        char secondName[50];
        int age;
        int testMatch;
        int totalRun;
        float avgRuns;
    } player;

    player arr[20];

    printf("Insert the range of players that you want to input the data of: \n");
    int n, m;
    scanf("%d %d", &n, &m);

    printf("\nEnter the details of the players: \n");
    for (int i = n - 1; i < m; i++)
    {
        printf("Enter the first name: ");
        scanf("%s", arr[i].firstName);
        printf("Enter the second name: ");
        scanf("%s", arr[i].secondName);
        printf("Enter his age: ");
        scanf("%d", &arr[i].age);
        printf("Enter the number of test matches that he has played: ");
        scanf("%d", &arr[i].testMatch);
        printf("Enter his total runs: ");
        scanf("%d", &arr[i].totalRun);
        if (i != n - 1)
        {
            printf("\nNext Player:\n");
        }
    }

    printf("The the range of players that you want to view: \n");
    scanf("%d %d", &n, &m);
    printf("\n\n");

    printf("Player Details: \n");
    for (int i = n - 1; i < m; i++)
    {
        printf("Player Name: %s %s\n", arr[i].firstName, arr[i].secondName
        
        );
        printf("Player Age: %d\n", arr[i].age);
        printf("Player Total Matches: %d\n", arr[i].testMatch);
        printf("Player Total Runs: %d\n", arr[i].totalRun);
        printf("Player Average Runs: %f\n\n", (float)arr[i].totalRun / arr[i].testMatch);
    }

    return 0;
}