#include <stdio.h>

float calculate(float a, float b, char op)
{
    switch(op)
    {
        case '+':
            return a + b;

        case '-':
            return a - b;

        case '*':
            return a * b;

        case '/':
            if(b != 0)
                return a / b;
            else
            {
                printf("Division by zero not allowed!\n");
                return 0;
            }

        default:
            printf("Invalid operator!\n");
            return 0;
    }
}

int main()
{
    float num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Result = %.2f\n", calculate(num1, num2, op));

    return 0;
}