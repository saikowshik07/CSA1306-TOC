#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int n;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    // Check whether string starts with 0 and ends with 1
    if (n >= 2 && str[0] == '0' && str[n - 1] == '1')
    {
        printf("String belongs to the language.\n");
    }
    else
    {
        printf("String does not belong to the language.\n");
    }

    return 0;
}