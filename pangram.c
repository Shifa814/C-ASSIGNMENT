#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int alpha[26] = {0};
    int i, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            alpha[str[i] - 'A'] = 1;
        else if(str[i] >= 'a' && str[i] <= 'z')
            alpha[str[i] - 'a'] = 1;
    }

    for(i = 0; i < 26; i++)
        count += alpha[i];

    if(count == 26)
        printf("The string is a Pangram\n");
    else
        printf("The string is not a Pangram\n");

    return 0;
}