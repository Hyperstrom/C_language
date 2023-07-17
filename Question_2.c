// Write a program to calculate average of numbers between m and n using pointer.
#include <stdio.h>
int main()
{
    int m, n, *ptr1, *ptr2, avg;
    ptr1 = &m;
    ptr2 = &n;
    printf("Enter first number: ");
    scanf("%d", &m);
    printf("Enter second number: ");
    scanf("%d", &n);
    avg = (*ptr1 + *ptr2) / 2;
    printf("avarage is: %d", avg);
    return 0;
}