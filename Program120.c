/* Accept string (normal) accept character (normal) chechk whether that char is present there or not */


#include <stdio.h>
#include <stdbool.h>


int Check(char *str, char ch)
{

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }

    if(*str == '\0')
    {
        return false;
    }
    else 
    {
        return true;
    }
    
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Please entre string : ");
    scanf("%[^'\n']s", Arr);

    printf("Please entre the character : \n");
    scanf(" %c", &cValue);

    bRet = Check(Arr, cValue);
    if(bRet == true)
    {
        printf("Character is presetn in the string\n", bRet);
    }
    else
    {
        printf("Character is not presetn in the string\n", bRet);
    }
    

    return 0;
}

