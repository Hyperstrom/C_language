#include <stdio.h>
int printarray(int arr[20], int num)
{
    int i;
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
int insertionsort(int arr[20], int num)
{
    int i, j, temp;
    for (i = 1; i <= num - 1; i++) // outer loop
    {
        temp = arr[i]; // sorting the array
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    printarray(arr, num);
}
int main()
{
    int i, n, a[20];
    printf("Enter no. of element of the array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Element[%d] :", i + 1);
        scanf("%d", &a[i]);
    }
    printf("The array.....\n");
    printarray(a, n);
    printf("\nAfter insertion sort the Array.....\n");
    insertionsort(a, n);
    return 0;
}