/* Accept a string from user copy that string into another string */

#include <stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;

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

    strcpyX(Arr, Brr); // strcpyX(100, 200);

    printf("Copied String is : %s\n", Brr); // copied value from Brr will be displayed 

    return 0;
}