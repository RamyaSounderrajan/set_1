#include <stdio.h>

void main()
{
    char ch;
    
    
    printf("Enter any character: ");
    scanf("%c", &ch);
    

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Alphabet");
    }
    else
    {
        printf("No");
    }
}

