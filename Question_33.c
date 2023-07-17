// Write a program to convert the temperature from Celsius to Fahrenheit and vice-versa.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float c, f; 
    int choice;
    while (1)
    {
    printf("\n\n1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Exit\n");
    printf("Enter your choice..... ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the Celsius degit : ");
            scanf("%f", & c);
        f = (c * 9/5) + 32;
        printf("Fahrenheit = %f ", f);
        break;
    case 2:
        printf("Enter the Fahrenheit degit :");
        scanf("%f", &f);
        c = (f - 32) * 5/9;
        printf("Celsius = %f", c);
        break;
case 3:
exit(0);
    default:
    printf("Wrong choice!\a\n ");
        break;
    }
    }
    return 0;
}