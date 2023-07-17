 //Armstrong number between n
 #include<stdio.h>
 int main()
 {
    int n,num,rem,sum,count=1;
    printf("Enter the any number: ");
    scanf("%d",&n);
    printf("The amrstrong numbers between %d =\n",n);
    while (count<=n)
    {
        num=count;
        sum=0;
        while (num)
        {
            rem = num%10;
            sum = (rem*rem*rem)+sum;
            num=num/10;
        }
        if ( count == sum)
        {
            printf("%d\t",count);
        }
        count++;
    }
    return 0;
 }