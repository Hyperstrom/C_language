//Write a program in C to determine if an entered is leap year or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the year : ");
    scanf("%d",&n);
    if ( n%400 == 0|| n%100 !=0 && n%4 ==0)
    {
        printf("The year %d is leap year ",n);

    }
    else 
    {
        printf("the year %d is not leap year",n);
    }
    return 0;
}