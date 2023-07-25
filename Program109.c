/*Accept full name from user and display it on screen */

#include <stdio.h>


int main()
{
    char Arr[50];

    printf("Entre your name : ");
    //scanf("%s", Arr);
    scanf("%[^'\n']s", Arr); // the [] is called as regular expression or RegEx (^) is called NOT operator or tilt // 

    printf("Your Name is : %s\n", Arr);

    return 0;
}