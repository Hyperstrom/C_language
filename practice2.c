#include <stdio.h>
int function(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("The %d,%d value of 2D Array: %d\n",i+1,j+1,arr[i][j]);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    // int arr[2][2]={{3,4},{7,9}};
    int arr[3][3];
    int i, j;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter %d,%d value: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("2D Array......\n");
    function(arr); // it go to the int function(int arr[3][3])
    return 0;
}