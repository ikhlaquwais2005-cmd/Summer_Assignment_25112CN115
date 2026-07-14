#include <stdio.h>
int main()
{
    int choice=0;
    int id,age;
    char name[50],department[50];
    float salary;

    while(choice!=3)
    {
        printf("\n========== EMPLOYEE MANAGEMENT SYSTEM ==========\n");
        printf("1.Add Employee\n");
        printf("2.Display Employee\n");
        printf("3.Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter Employee ID:");
                scanf("%d",&id);
                printf("Enter Employee Name:");
                scanf("%s",name);
                printf("Enter Age:");
                scanf("%d",&age);
                printf("Enter Department:");
                scanf("%s",department);
                printf("Enter Salary:");
                scanf("%f",&salary);
                printf("\nEmployee record added successfully.\n");
                break;

            case 2:
                printf("\n========== EMPLOYEE RECORD ==========\n");
                printf("Employee ID:%d\n",id);
                printf("Name       :%s\n",name);
                printf("Age        :%d\n",age);
                printf("Department :%s\n",department);
                printf("Salary     :%.2f\n",salary);
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