//2D Aarry using function 
#include <stdio.h>
int function(int arr[40][40], int r, int c)
{
    //printf("Enter the no of rows: ");
    //scanf("%d",int r);
    //printf("Enter the no of rows: ");
    //scanf("%d",int c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
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
    int arr[40][40];
    int i,j,r,c;
    printf("Enter the no of rows: ");
    scanf("%d",&r);
    printf("Enter the no of rows: ");
    scanf("%d",&c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter %d,%d value: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("2D Array......\n");
    function(arr ,r,c); // it go to the int function(int arr[40][40])
    return 0;
}