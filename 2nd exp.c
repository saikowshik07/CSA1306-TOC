#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, state = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (state == 0)
        {
            if (str[i] == '0')
                state = 1;
            else
                state = 3;
        }
        else if (state == 1)
        {
            if (str[i] == '0')
                state = 1;
            else if (str[i] == '1')
                state = 2;
            else
                state = 3;
        }
        else if (state == 2)
        {
            if (str[i] == '0')
                state = 1;
            else if (str[i] == '1')
                state = 2;
            else
                state = 3;
        }
        else
        {
            state = 3;
        }
    }

    if (state == 2)
        printf("String is ACCEPTED\n");
    else
        printf("String is REJECTED\n");

    return 0;
}