 #include<stdio.h>
 int main()
 {
    //printf("Hello world");
    int i,j,num=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        for(j=0;j<i;j++) 
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
 }
