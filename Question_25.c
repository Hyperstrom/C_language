// Write a C Program to check whether the given input is vowel or consonant using switch case.
#include <stdio.h>
int main()
{
    int ch;
    printf("Enter the alphabet : ");
    scanf("%c", &ch);
    // switch case
    switch (ch)
    {
    case 'A':
        printf("Vowel");
        break;
    case 'E':
        printf("Vowel");
        break;
    case 'I':
        printf("Vowel");
        break;
    case 'O':
        printf("Vowel");
        break;
    case 'U':
        printf("Vowel");
        break;
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
        break;
    }
    return 0;
}