/* Reverse the string accepted from user in place */

#include <stdio.h>

void strrevX(char *str)
{
    char *start = NULL; // char *start = str;
    char *end = NULL; // char *end = str;
    char Temp = '\0';
    start = str;
    end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        Temp = *start;
        *start = *end;
        *end = Temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[20];

    printf("Please enter string : \n"); // Arr chya aat madhe 
    scanf("%[^'\n']s", Arr);

    strrevX(Arr);

    printf("Rverse string is : %s\n", Arr);

    return 0;
}