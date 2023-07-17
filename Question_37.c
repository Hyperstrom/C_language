//Write a program to calculate the reverse of a string without using strrev() function.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    char  ch;
    int i,len;
    printf("Enter the string : ");
    gets(str);
    len = strlen(str);
for ( i = 0; i < len/2; i++)
{
     ch = str[i];
     str[i] = str[len -1 -i];
     str[len -1-i] = ch;
}
printf("The reverse string is : %s",str);
return 0;

}