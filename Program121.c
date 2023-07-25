/* Accept a string from user and convert the uppercase to lowercase or vice versa */

#include <stdio.h>

char ToUpperX(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return ch - 32;
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

    cRet = ToUpperX(cValue);

    printf("Cahracter in Upper case is : %c\n", cRet);

    return 0;
}