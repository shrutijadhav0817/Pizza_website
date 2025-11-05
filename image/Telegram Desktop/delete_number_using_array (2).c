#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe original array elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int pos;
    printf("\n\nEnter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    pos--;  

    if (pos >= 0 && pos < n)
    {
        for (int i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--; 
        printf("\nThe array after deletion is:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("\nInvalid index.\n");
    }

    return 0;
}
