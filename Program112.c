/*Accept full name from user and display it on screen */

#include <stdio.h>

int strlenX(char str[])
{
    int iCnt = 0; int i = 0; 

    for(i = 0; str[i] != '\0'; i++)
    {
        iCnt++;
    }
    
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0; 

    printf("Please entre string : ");
    //scanf("%s", Arr);
    scanf("%[^'\n']s", Arr); // the [] is called as regular expression or RegEx (^) is called NOT operator or tilt // 

    iRet = strlenX(Arr); // strlenX(100)

    printf("Number of Characters are : %d\n", iRet);

    return 0;
}