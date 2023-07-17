// fibonacci series using recurtion
#include<stdio.h>
int fibonacci(int n)
{
    if (n==0 || n==1)
    {
        return n;
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
int main()
{
    int num, n=0 ,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("%d\t", fibonacci(n));
        n++;
    }
    return 0;
}
/*int fibonacci(int n)
{
    if (n==0 || n==1)
    {
        return n;
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }    
    }*/