#include <stdio.h>

int main()
{
    int num1, num2, pos, n;
    int mask, bits1, bits2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    mask = ((1 << n) - 1) << pos;

    bits1 = num1 & mask;
    bits2 = num2 & mask;

    num1 = (num1 & ~mask) | bits2;
    num2 = (num2 & ~mask) | bits1;

    printf("First number after swap = %d\n", num1);
    printf("Second number after swap = %d\n", num2);

    return 0;
}