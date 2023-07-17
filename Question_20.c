//Write a C program to print the following pattern: 
//A
//B C
//D E F
//G H I J
#include<stdio.h>
int main()
{
    int i,j,n,num=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The pettern.........\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("%c ", 64+num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
