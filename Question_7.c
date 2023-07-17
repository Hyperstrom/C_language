// Write a C program to add two distances (in inch-feet system) using structure.
#include <stdio.h>
struct info
{
    float inch;
    int feet;
};
// d1,d2,result;
int main()
{
    struct info d1, d2, result;
    // 1st value
    printf("Enter 1st distance\n");
    printf("Enter feet value: ");
    scanf("%d", &d1.feet);
    printf("Enter inch value: ");
    scanf("%f", &d1.inch);
    // 2nd value
    printf("Enter 2nd distance\n");
    printf("Enter feet value: ");
    scanf("%d", &d2.feet);
    printf("Enter inch value: ");
    scanf("%f", &d2.inch);
    // adding
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;
    while (result.inch >= 12.00)
    {
        result.inch = result.inch - 12.00;
        result.feet++;
    }
    printf("The sum : %d\'-%f\"", result.feet, result.inch);
    return 0;
}
