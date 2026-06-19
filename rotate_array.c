#include <stdio.h>

int main()
{
    int n, i, pos;
    int arr[100], temp[100];
    char dir;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &pos);

    printf("Enter direction (L for left, R for right): ");
    scanf(" %c", &dir);

    pos = pos % n;

    if(dir == 'L' || dir == 'l')
    {
        for(i = 0; i < n; i++)
        {
            temp[i] = arr[(i + pos) % n];
        }
    }
    else if(dir == 'R' || dir == 'r')
    {
        for(i = 0; i < n; i++)
        {
            temp[(i + pos) % n] = arr[i];
        }
    }

    printf("Rotated array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}