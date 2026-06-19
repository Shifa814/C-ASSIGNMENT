#include <stdio.h>

int main()
{
    char str[100];
    int num = 0, i = 0;

    printf("Enter a number as string: ");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }

    printf("Integer value = %d\n", num);

    return 0;
}