//Write a C program to print the following pattern: 
//5 4 3 2 1
//5 4 3 2
//5 4 3
//5 4
//5
#include<stdio.h>
int main()
{
    int i,j,n;
    printf(" Enter the number: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for( j =n; j>=i; j--)
        {
        printf("%d ",j);
    }
    printf("\n");
    }
    return 0;
}