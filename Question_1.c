// Write a C program to swap two values using pointers.
#include<stdio.h>
int main()
{
    int a,b, *ptr1, *ptr2 ,temp;
    ptr1 = &a;
    ptr2 = &b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
     temp = *ptr1;
     *ptr1 = *ptr2;
     *ptr2 = temp;
     printf("After swaping first number = %d and second number = %d",*ptr1 , *ptr2);
     return 0;
}