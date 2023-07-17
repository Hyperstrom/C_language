// pass the values of array to the function 
#include<stdio.h>
int func(int arr[]) //call by value 
{
    for(int i=0;i<6;i++)
    {
        printf("The %d number of array: %d\n",i,arr[i]);
        
    }
    //arr[3]=890;// very important point that if you change any value her it gets reflected in main()
    return 0;
}
int func2(int*ptr) // pass the value using pointer // call by reference 
{
    for(int i=0;i<6;i++)
    {
        printf("The %d number of array: %d\n",i,*(ptr+i));
        
    }
    *(ptr +2)=858;
}
int main()
{
    int arr[]={4,5,6,7,8,9};
    //func(arr);
    //printf("The 3th value of array %d",arr[3]);
func2(arr);
func2(arr); // when second time func2 call array *(ptr +2) change the value of the array.so, second time it prints 858
    return 0;
}