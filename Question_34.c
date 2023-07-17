//Write a program to swap two integers with using 3rd variable
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the number.....\n");
    scanf("%d %d",&a,&b);
    temp = a;
    a=b;
    b=temp;
    printf("After swaping the numnbers are.....\n%d , %d",a,b);
    return 0;
}