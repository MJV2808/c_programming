/******************************************************************************
Name:Junaid Valsangkar
div:b 
uin:251C012
roll no:9
*******************************************************************************/
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial of a negative number doesn't exist.");
    else
        printf("Factorial of %d is %d", num, factorial(num));

    return 0;
}
