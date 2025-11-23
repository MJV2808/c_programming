/******************************************************************************
Name:Junaid Valsangkar
div:b 
uin:251C012
roll no:9
*******************************************************************************/
#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
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
