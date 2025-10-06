/******************************************************************************
 Name:Junaid
 Uin:251C012
 Class:Civil
 Div:B
*******************************************************************************/

#include <stdio.h>

int main() {
    int phy, chem, math;
    float avg;

    printf("Enter Physics marks: ");
    scanf("%d", &phy);
    printf("Enter Chemistry marks: ");
    scanf("%d", &chem);
    printf("Enter Mathematics marks: ");
    scanf("%d", &math);

    avg = (phy + chem + math) / 3.0;

    printf("Average Marks in PCM = %.2f\n", avg);

    (avg >= 50) ? printf("Eligible for admission\n") : printf("Not eligible for admission\n");

    return 0;
}