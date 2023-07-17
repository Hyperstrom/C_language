// Write a C program to check the length of a string
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter the string: ");
    gets(s);
    printf("\nThe length of the string : %d\n",strlen(s));
    return 0; 
}