// Write a program in C to determine whether a number is prime or not.
#include <stdio.h>
int main()
{
    int i, n, prime = 1;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime)
    {
        printf("%d is a prime number ",n);
    }
    else
    {
        printf("%d is not prime number ",n);
    }
    return 0;
}