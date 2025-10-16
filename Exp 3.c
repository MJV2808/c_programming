/******************************************************************************
Name:Junaid
Uin:251C012
Class:Civil
Div:B
*******************************************************************************/
#include<stdio.h>
int main()
{
    start:
    int a,b,choice;
    printf("Enter Two numbers:");
    scanf("%d %d",&a,&b);
    printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Exit \nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            printf("\n Sum is %d \n",a+b);
            goto start;
            break;
        }
        case 2:
        {
            printf("\n Subtraction is %d \n",a-b);
            goto start;
            break;
        }
        case 3:
        {
            printf("\n Multiplication is %d \n",a*b);
            goto start;
            break;
        }
        case 4:
        {
            printf("\n Division is %d \n",a/b);
            if (b==0)
            {
                printf("The number cannot be divided");
            }
            goto start;
            break;
        }
        case 5:
        {
            break;
        }
    }
return 0;
}
