/******************************************************************************
Name:Junaid Valsangkar
div:b 
uin:251C012
roll no:9
*******************************************************************************/
#include <stdio.h>

void counter() {
    static int count = 0;   
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    counter();
    counter();
    counter(); 

    return 0;
}
