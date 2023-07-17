#include <stdio.h>
int func(int arr[20], int n)
{
    int i,sum;
    for (i=0;i<n;i++)
    {
    sum = sum + arr[i];
    }
    return (sum);
}
int main()
{
    int i,n,arr[20],summation;
printf("Enter the number of element: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Element %d: ", i+1);
    scanf("%d",&arr[i]);
}
summation= func(arr ,n)-55;
printf("The summation = %d",summation);
return 0;
}