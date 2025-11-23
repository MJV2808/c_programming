/**************************
Name:Junaid Valsangkar
div:b
uin:251C012
roll no:9
***************************/
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e;
    int choice;

    while (1) {
        printf("\n--- Employee Database ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            fp = fopen("emp.txt", "a");
            if (fp == NULL) {
                printf("Error opening file!\n");
                return 1;
            }

            printf("Enter ID: ");
            scanf("%d", &e.id);
            printf("Enter Name: ");
            scanf("%s", e.name);
            printf("Enter Salary: ");
            scanf("%f", &e.salary);

            fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);
            printf("Employee Added Successfully.\n");

            fclose(fp);
        }

        else if (choice == 2) {
            fp = fopen("emp.txt", "r");
            if (fp == NULL) {
                printf("No records found!\n");
                continue;
            }

            printf("\nID\tName\tSalary\n");
            while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF) {
                printf("%d\t%s\t%.2f\n", e.id, e.name, e.salary);
            }
            fclose(fp);
        }

        else if (choice == 3) {
            printf("Program Exited.\n");
            break;
        }

        else {
            printf("Invalid Choice! Try Again.\n");
        }
    }

    return 0;
}
