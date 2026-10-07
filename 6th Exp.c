#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n, flag = 1;

    printf("Enter the string: ");
    scanf("%s", str);

    n = strlen(str);

    for(i = 0; i < n / 2; i++)
    {
        if(str[i] != '0' || str[n - i - 1] != '1')
        {
            flag = 0;
            break;
        }
    }

    if(flag && n % 2 == 0)
        printf("String is ACCEPTED");
    else
        printf("String is REJECTED");

    return 0;
}