//Write a program to check whether a string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
    int l,i;
    char str[50];
    printf("Enter the string : ");
    gets(str);
    l = strlen(str);
    for ( i = 0; i < l/2; i++)
    {
        if ( str[i] != str[l-1-i])
        {
            printf("The string is not palindrome");
            break;
        }
        
    }
    if (i == l/2)
    {
        printf("The string is palindrome");
    }
    return 0;
}
 