//. Write a program in C to find the maximum number between two numbers using a pointer.
#include<stdio.h>
int main()
{
    int a,b, *ptr1,*ptr2;
    ptr1 = &a;
    ptr2 =&b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(*ptr1 > *ptr2)
    {
        printf("maximum number = %d",*ptr1);
    }
    else{
        printf("maximun number = %d",*ptr2);
    }
    return 0;
}