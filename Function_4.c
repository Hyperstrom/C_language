//factorial using function 
#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for( i=1;i<=n;i++)
    {
        f=f*i;
    }
    return(f);
}
int main()
{
    int n,factorial;
    printf("Enter the number: ");
    scanf("%d",&n);
    factorial = fact(n);
    printf("The factorial of %d is %d",n,factorial);
    return 0;
}