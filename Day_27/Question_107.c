#include <stdio.h>
int main()
{
    int choice=0;
    int id;
    char name[50];
    float basicSalary,bonus,deduction,netSalary;

    while(choice!=3)
    {
        printf("\n========== SALARY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Salary Details\n");
        printf("2. Display Salary Details\n");
        printf("3. Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter Employee ID:");
                scanf("%d",&id);
                printf("Enter Employee Name:");
                scanf("%s",name);
                printf("Enter Basic Salary:");
                scanf("%f",&basicSalary);
                printf("Enter Bonus:");
                scanf("%f",&bonus);
                printf("Enter Deduction:");
                scanf("%f",&deduction);
                
                netSalary=basicSalary+bonus-deduction;
                printf("\nSalary details added successfully.\n");
                break;

            case 2:
                printf("\n========== SALARY DETAILS ==========\n");
                printf("Employee ID  :%d\n",id);
                printf("Employee Name:%s\n",name);
                printf("Basic Salary :%.2f\n",basicSalary);
                printf("Bonus        :%.2f\n",bonus);
                printf("Deduction    :%.2f\n",deduction);
                printf("Net Salary   :%.2f\n",netSalary);
                break;

            case 3:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}