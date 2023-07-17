// determine the power of any number 
#include<stdio.h>
int power(int x, int y)
{
    int i,p=1;
    for(i=0;i<y;i++)
    {
        p=p*x;
    }
    return(p);
}
int main()
{
    int x,y,pow;
    printf("Enter The number: ");
    scanf("%d",&x);
    printf("Enter the power: ");
    scanf("%d",&y);
pow = power(x,y);
printf("%d to the power %d = %d",x,y,pow);
return 0;
}