//Draw a program to calculate the maximum of three numbers
#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("Enter the elements......\n");
    scanf("%d %d %d",&a,&b,&c);
 if ( a> b)
 {
    if ( a>c)
    {
        printf("%d is the largest number ",a);
    }
    else 
    {
        printf("%d is largest number ",c);
    }
 }
 else
 {
    if (b>c)
    {
        printf("%d is largest number ",b);
    }
    else
    {
        printf("%d is largest number ",c);
    }

 }
 return 0;
}