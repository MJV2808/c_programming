/******************************************************************************
Name:Junaid Valsangkar
div:b 
uin:251C012
roll no:9
*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, count = 0;

    printf("Enter a string: ");
    gets(str);  

    while(str[i] != '\0')   
    {
        count++;  
        i++;
    }

    printf("Length of the string = %d", count);

    return 0;
}
