#include <stdio.h>

int main()
{
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] == ' ' && str[i + 1] == ' ')
        {
            i++;
            continue;
        }

        result[j] = str[i];
        i++;
        j++;
    }

    result[j] = '\0';

    printf("Cleaned string = %s", result);

    return 0;
}