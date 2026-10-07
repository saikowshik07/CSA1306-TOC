#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int n, i, left = 0, right = 0, mid = 0;
    int valid = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    // Count 0's at the beginning
    while (left < n && str[left] == '0')
        left++;

    // Count 1's in the middle
    i = left;
    while (i < n && str[i] == '1')
    {
        mid++;
        i++;
    }

    // Count 0's at the end
    while (i < n && str[i] == '0')
    {
        right++;
        i++;
    }

    // Check conditions
    if (i != n || left != right)
        valid = 0;

    if (valid)
        printf("String belongs to the language.\n");
    else
        printf("String does not belong to the language.\n");

    return 0;
}