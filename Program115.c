/* Accept string from user and find occurance of A in that array */

#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0; 

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Please entre string : ");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapital(Arr);

    printf("Frequency of smallcasae letters are : %d\n", iRet);

    return 0;
}