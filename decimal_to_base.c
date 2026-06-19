#include <stdio.h>

void convertBase(int num, int base)
{
    char result[50];
    int i = 0;

    while(num > 0)
    {
        int rem = num % base;

        if(rem < 10)
            result[i++] = rem + '0';
        else
            result[i++] = rem - 10 + 'A';

        num /= base;
    }

    printf("Converted Number = ");

    for(int j = i - 1; j >= 0; j--)
        printf("%c", result[j]);

    printf("\n");
}

int main()
{
    int num, base;

    printf("Enter decimal number: ");
    scanf("%d", &num);

    printf("Enter base (2-16): ");
    scanf("%d", &base);

    convertBase(num, base);

    return 0;
}