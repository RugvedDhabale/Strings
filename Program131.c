/* Accept a string from user convert it into uppercase and copy it into another Array */


#include <stdio.h>

void strcpytoggle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <=  'Z'))
        {
            *dest = *src + 32;
        }
        else if((*src >= 'a') && (*src <=  'z'))
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{

    char Arr[20]; // filled book 
    char Brr[20]; // copy book

    printf("Please enter string : \n"); // Arr chya aat madhe 
    scanf("%[^'\n']s", Arr);

    strcpytoggle(Arr, Brr); // strcpyX(100, 200);

    printf("Toggled String is : %s\n", Brr); // copied value from Brr will be displayed 
    printf("Original string is : %s\n", Arr);
    
    return 0;
}