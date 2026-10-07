#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int n;

    printf("Enter the string: ");
    scanf("%s", str);

    n = strlen(str);

    if(str[0] == 'o' && str[n - 1] == '1')
        printf("String is ACCEPTED");
    else
        printf("String is REJECTED");

    return 0;
}