/* Accept a string from user and convert the uppercase to lowercase or vice versa */

#include <stdio.h>

char ToLowerX(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return ch + 32;
    }
    else
    {
        return ch;
    }
    
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Entre the cahracter : ");
    scanf("%c", &cValue);

    cRet = ToLowerX(cValue);

    printf("Cahracter in Lower case is : %c\n", cRet);

    return 0;
}