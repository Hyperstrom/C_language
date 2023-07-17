//Write a C program to print the following pattern: 
//A B C D E
//A B C D
//A B C
//A B
//A
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for ( i = n; i > 0; i--)
    {
        for ( j = 0; j < i; j++)
        {
            printf("%c ",65+j);
        }
        printf("\n");
    }
    return 0;
}
