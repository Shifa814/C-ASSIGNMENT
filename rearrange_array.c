#include <stdio.h>

int main()
{
    int n, i, j = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], result[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Copy negative numbers first
    for(i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            result[j++] = arr[i];
        }
    }

    // Copy positive numbers and zero
    for(i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
        {
            result[j++] = arr[i];
        }
    }

    printf("Rearranged array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}