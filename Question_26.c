// Write a c program to calculate the sum of n natural numbers using while loop.
#include<stdio.h>
int main()
{
    int n,i, sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum = %d",sum);
    return 0;
}