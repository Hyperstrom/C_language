//. Define a recursive & non recursive function to calculate the factorial of a number.
#include<stdio.h>
int factorial(int n)
{
    if ( n == 0 || n == 1)
    {
        return 1;
    }
    else{
        return (n*factorial(n-1));
    }
}
int main()
{
    int i,n,fact=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    printf("The factorial of %d is %d",n,fact); // non recursive function 
    printf("\nThe factorial is %d",factorial(n)); // through recursive function 
    return 0;
}