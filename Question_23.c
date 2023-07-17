//Write a C Program to check whether the given number is Armstrong or not.
 #include<stdio.h>
 int main()
 {
    int n,arm=0,r,c;
    printf("Enter any number: ");
    scanf("%d",&n);
    c=n;
    while (n>0)
    {
        r = n%10;
        arm = (r*r*r)+arm;
        n=n/10;
    }
    if (c==arm)
    {
        printf("The number %d is Armstrong Number",c);
    }
    else{
        printf("The number %d is not armstrong number",c);
    }
    return 0;
 }