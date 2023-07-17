// Write a C program to show the reverse of a string without using library function
#include <stdio.h>
#include <string.h>
int main()
{
    char string[100], temp;
    int i, length;
    printf("Enter the string: ");
    gets(string);
    length = strlen(string) - 1;
    for (i = 0; i < length; i++)
    {
        temp = string[i];
        string[i] = string[length];
        string[length--] = temp;
    }
    printf("The reverse string is %s\n", string);
    printf("The string = %s\n", strrev(string));
    printf("Reverse string = %s", strrev(string));// use  library function strrev
    return 0;
}