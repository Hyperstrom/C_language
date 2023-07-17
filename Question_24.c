//Write a C Program to check whether the given number is palindrom or not.
#include<stdio.h>
int main()
{
    int n,sum=0,rem,term;
    printf("Enter the number : ");
    scanf("%d",&n);
    term = n;
    while(n>0)
    {
        rem =n%10;
        sum = (sum*10)+rem;
        n = n/10;
    }
    if(term == sum)
    {
        printf("The number %d is palindrom number ",term);
    }
    else
    {
        printf("The number %d is not palindrom number ",term);
    }
    return 0;
}