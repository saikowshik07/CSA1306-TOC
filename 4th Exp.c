#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n, valid = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    // String must start with 0 and end with 1
    if (n < 2 || str[0] != '0' || str[n - 1] != '1')
    {
        valid = 0;
    }

    // Check whether all characters are 0 or 1
    for (i = 0; i < n; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("String belongs to the language.\n");
    else
        printf("String does not belong to the language.\n");

    return 0;
}