// Write a program in C to sort an array using Pointer
#include<stdio.h>
int main()
{
    int arr[20],i,j,n,temp, *ptr;
    printf("Enter how many number: ");
    scanf("%d",&n);
    ptr = arr;
    printf("\n Enter the elements.....\n");
    for(i=0;i<n;i++)
    {
        printf("Element[%d]- ",i+1);
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n -1-i ;j++)
        {
            if (*(ptr+j)< *(ptr+j+1))
            {
                temp = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = temp;
            }
        }
    }
    printf("after shorting the elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}