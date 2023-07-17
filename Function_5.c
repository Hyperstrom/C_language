// leap year
#include <stdio.h>
int leap(int y)
{
    if (y % 400 == 0 || y % 100 != 0 && y % 4 == 0)
    {
        printf("The year is a leap year\n");
    }
    else
    {
        printf("The year is not a leap year\n");
    }
    return 0;
}
int main()
{
    int y;
    printf("Enter the year:");
    scanf("%d", &y);
    leap(y);
    return 0;
}