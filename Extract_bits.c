#include <stdio.h>

int main()
{
    int num, pos, n, result;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    result = (num >> pos) & ((1 << n) - 1);

    printf("Extracted bits = %d\n", result);

    return 0;
}