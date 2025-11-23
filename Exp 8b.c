/******************************************************************************
Name:Junaid Valsangkar
div:b 
uin:251C012
roll no:9
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int length, i, flag = 1;

    printf("Enter a string: ");
    gets(str);  
    length = strlen(str);

    for(i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[length] = '\0';

    
    for(i = 0; i < length; i++) {
        if(str[i] != rev[i]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");

    return 0;
}
