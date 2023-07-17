// Write a program to swap two integers without using 3rd variable
#include<stdio.h>
int main()
{
       int a,b;
       printf("Enter the first number: ");
       scanf("%d",&a);
       printf("Enter the second number: ");
       scanf("%d",&b);
       a = a+b;
       b= a-b;
       a = a-b;
       //after swaping 
       printf("after swapping first variable %d & second variable %d",a,b);
       return 0;

}