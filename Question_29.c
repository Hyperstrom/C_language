//Write a program in C to determine whether a number is odd or even.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("%d is a even number ",n);
    }
    else{
        printf("%d is odd number ",n);
    }
    return 0;
}