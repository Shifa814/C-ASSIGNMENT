#include <stdio.h>

int main()
{
    int num, pos, n;
    int mask;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to toggle: ");
    scanf("%d", &n);

    mask = ((1 << n) - 1) << pos;

    num = num ^ mask;

    printf("Result = %d\n", num);

    return 0;
}