/******************************************************************************
Name:Junaid Valsangkar
UIN:251C012
Roll no.9
div.B civil

*******************************************************************************/
#include <stdio.h>

int main() 
{
    int a[5], i;
    int *p = a;
    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i++)
    scanf("%d", p + i);
    printf("Array in reverse order:\n");
    for (i = 4; i >= 0; i--)
    printf("%d ", *(p + i));
    return 0;
}
