// Write a program in C to determine whether an entered character is a vowel or not.
#include<stdio.h>
int main()
{
    char ch;
    //char A,E,I,O,U,a,e,i,o,u;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if( ch== 'A' || ch=='E' ||ch=='I' ||ch=='O' ||ch=='U' ||ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
    {
        printf("The character is vowel");
    }
    else
    {
        printf("The character is consonant");
    }
    return 0;
}
