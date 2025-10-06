/******************************************************************************
name:Junaid
uin:251C012
class:Civil
div:B
*******************************************************************************/

#include <stdio.h>

int main() {
    char name[50];        
    int age;                  
    char className[50];     
    char division;           
    char uin[20];   

    printf("===== Enter Student Information =====\n\n");
    printf("Enter Name: ");
    scanf("%[^\n]", name); 

    printf("Enter Age: ");
    scanf("%d", &age);

    getchar(); 

    printf("Enter Class: ");
    scanf("%[^\n]", className);

    printf("Enter Division: ");
    scanf(" %c", &division); 

    printf("Enter UIN: ");
    scanf("%s", uin);

    printf("\n===== Student Information =====\n\n");
    printf("Name\t: %s\n", name);           
    printf("Age\t: %d\n", age);
    printf("Class\t: %s\n", className);
    printf("Division: %c\n", division);
    printf("UIN\t: %s\n", uin);  
    printf("\n===============================\n");

    return 0;
}