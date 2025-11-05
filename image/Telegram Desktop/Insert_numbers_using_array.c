#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    int arr[n + 1];  

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

    int element, pos;
    printf("\n\nEnter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert at (1 to %d): ", n + 1);
    scanf("%d", &pos);

    pos--; 

    if (pos >= 0 && pos <= n)
    {
        for (int i = n; i > pos; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[pos] = element;
        n++; 

        printf("\nThe array after insertion is:\n");
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
