// Write a C program to calculate the transpose of a matrix.
#include<stdio.h>
int main()
{
    int row,com,i,j,a[10][10],b[10][10];
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    printf("Enter no. coloumbs: ");
    scanf("%d",&com);
    printf("Enter the elements of the matrix.....\n");
    for ( i = 0; i < row; i++)
    {
       for ( j = 0; j < com; j++)
       {
        printf("Element[%d,%d]- ",i+1,j+1);
        scanf("%d",& a[i][j]);
       }
       
    }
    printf("The matrix ......\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < com; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     //transposing the matrix 
     for ( i = 0; i < row; i++)
     {
        for ( j = 0; j < com; j++)
        {
            b[j][i]=a[i][j];
        }
        
     }
     
    printf("The transpose matrix.......\n");
    for ( i = 0; i < com; i++)
    {
        for ( j = 0; j < row; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}