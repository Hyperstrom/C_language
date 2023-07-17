//Define a recursive & non recursive function to calculate the sum of n natural numbers.
#include<stdio.h>
int rec(int n) // through recursive fuction 
{
    if (n<=1)
    {
        return(n);
    }
    else 
    {
        return (n + rec(n-1));
    }
}
int main ()
{
    int i,n,sum;
printf("Enter the no. natural number: ");  //through non recursive fuction
scanf("%d",&n);
for ( i = 1; i <=n; i++)
{
    sum = sum+i;
}
printf("The sum of %d natural number = %d",n,sum);
printf("\nThe sum = %d",rec(n));
return 0;
}