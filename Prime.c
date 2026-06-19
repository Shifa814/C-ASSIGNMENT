#include <stdio.h>

int main() {
    int num, i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
        prime = 0;

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            prime = 0;
            break;
        }
    }

    if (prime)
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}