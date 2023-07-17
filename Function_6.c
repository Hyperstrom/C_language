// find prime factor of any number 
#include<stdio.h>
int primefactor(int num) // yt video link-  https://www.youtube.com/watch?v=QAxnHPxicgY
{
    int count;                        
    for(count =2 ; num>1; count++) // web site link - https://technotip.com/7813/c-program-to-find-prime-factors-of-a-number/#:~:text=Inside%20primefactors()%20function%20we,by%20the%20value%20of%20count.
    {
        while(num %count ==0)
        {
            printf("%d\t",count);
            num = num/count;
        }
    }
    return 0;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The factors are:\n");
    primefactor(num);
    return 0;
}