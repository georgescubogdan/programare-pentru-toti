/**
 * Authors: PPT Team
 **/
#include <stdio.h>

void reverseSentence()
{
    char c;
    scanf("%c", &c);
    if( c != '\n')
    {
        reverseSentence();
        printf("%c",c);
    }
}

int main()
{
    printf("Enter a sentence: ");
    reverseSentence();
    printf("\n");
    return 0;
}
