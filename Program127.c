/* Accept a string from user and count number of white spaces */

#include <stdio.h>

int CountSpace(char *str)
{
    int iCnt = 0; 

    while(*str != '\0')
    {
        if((*str == ' '))
        {
            iCnt++;
        }

        str++;
    }
    return iCnt;
}

int main()
{

    char Arr[20];
    int iRet = 0;

    printf("Please enter string : \n");
    scanf("%[^'\n']s", Arr);


    iRet = CountSpace(Arr); // strlwrX(100);

    printf("Number of White space are : %d\n", iRet);

    return 0;
}