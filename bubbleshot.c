
#include<stdio.h>
int printingarray ( int arr[20], int num)
{
    int i;
    for (i = 0; i < num; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0 ;
}
int bubbleshot(int a[20], int no)
{
int i ,j,temp;
for ( i = 0; i < no-1 ; i++)
{
    for ( j = 0; j < no-1-i; j++)
    {
        if (a[j]> a[j+1])
        {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
        
    }
    
}
printingarray(a , no);
return 0;
}

int main()
{
    int i , n , a[20];
    printf("Enter the no. of element : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Element[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The Array ....\n");
    printingarray( a,n );
    printf("\nAfter sorting .....\n ");
    bubbleshot( a ,n );
    return 0;
}