#include<stdio.h>
int main ()
{
    int row,com,i,j,arr[50][50];
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("\nEnter the number of columns: ");
    scanf("%d",&com);
    for(i=0;i<row;i++) //store the elements of matrix 
    {
        for(j=0;j<com;j++)
        {
            printf("\nMatrix [%d,%d]: ",i+1,j+1);
            scanf("%d",& arr[i][j]);
        }
    }
    printf("\nThe Matrix is.....\n");
     for(i=0;i<row;i++) // print the matrix 
    {
        for(j=0;j<com;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}