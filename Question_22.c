//Write a C program to print the following pattern: 
//1
//2 3
//4 5 6
//7 8 9 10
#include<stdio.h>
int main()
{
    int i,j,n,num=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}