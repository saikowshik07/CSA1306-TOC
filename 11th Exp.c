#include <stdio.h>

int n;
int e[10][10];
int visited[10];

void closure(int state)
{
    int i;

    visited[state] = 1;

    for(i = 0; i < n; i++)
    {
        if(e[state][i] == 1 && visited[i] == 0)
        {
            closure(i);
        }
    }
}

int main()
{
    int i, j;

    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter epsilon transition matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &e[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            visited[j] = 0;
        }

        closure(i);

        printf("E-closure(q%d) = { ", i);

        for(j = 0; j < n; j++)
        {
            if(visited[j] == 1)
            {
                printf("q%d ", j);
            }
        }

        printf("}\n");
    }

    return 0;
}