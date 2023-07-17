// sumation of three number 
#include <stdio.h>
int sumation(int x, int y, int z)
{
    int d;
    d = x + y + z;
    return (d);
}
int main()
{
    int a, b, c, avg;
    printf("Enter any three values: ");
    scanf("%d%d%d", &a, &b, &c);
    avg = sumation(a, b, c) / 3;
    printf("average =%d", avg);
    return 0;
}