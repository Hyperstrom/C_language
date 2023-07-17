//Write a program to calculate the length of a string without using strlen() function.
#include<stdio.h>
#include<string.h>
int main()

{
int count = 0,i=0;

     char str[50];
     printf("Enter the string : ");
     gets(str);
     while( str[i] != '\0')
     {
        count ++;
        i++;
     }
     
     printf("Length of the string is %d",count);
     return 0;
}