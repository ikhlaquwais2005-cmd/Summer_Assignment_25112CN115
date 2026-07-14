#include <stdio.h>
int main()
{
    int choice=0;
    int roll,year;
    char name[50];
    float sem1,sem2,sem3,sem4;
    float sem5,sem6,sem7,sem8;
    float cgpa=0;

    while(choice!=3)
    {
        printf("\n========== STUDENT RECORD MANAGEMENT ==========\n");
        printf("1. Add Student Record\n");
        printf("2. Display Student Record\n");
        printf("3. Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:

                printf("Enter Roll Number:");
                scanf("%d",&roll);
                printf("Enter Name:");
                scanf("%s",name);
                printf("Enter Year (1-4):");
                scanf("%d",&year);

                if(year==1)
                {
                    printf("Enter Semester 1 SGPA:");
                    scanf("%f",&sem1);
                    printf("Enter Semester 2 SGPA:");
                    scanf("%f",&sem2);
                    cgpa=(sem1+sem2)/2;
                }
                else if(year==2)
                {
                    printf("Enter Semester 1 SGPA:");
                    scanf("%f",&sem1);
                    printf("Enter Semester 2 SGPA:");
                    scanf("%f",&sem2);
                    printf("Enter Semester 3 SGPA:");
                    scanf("%f",&sem3);
                    printf("Enter Semester 4 SGPA:");
                    scanf("%f",&sem4);
                    cgpa=(sem1+sem2+sem3+sem4)/4;
                }
                else if(year==3)
                {
                    printf("Enter Semester 1 SGPA:");
                    scanf("%f",&sem1);
                    printf("Enter Semester 2 SGPA:");
                    scanf("%f",&sem2);
                    printf("Enter Semester 3 SGPA:");
                    scanf("%f",&sem3);
                    printf("Enter Semester 4 SGPA:");
                    scanf("%f",&sem4);
                    printf("Enter Semester 5 SGPA:");
                    scanf("%f",&sem5);
                    printf("Enter Semester 6 SGPA:");
                    scanf("%f",&sem6);
                    cgpa=(sem1+sem2+sem3+sem4+sem5+sem6)/6;
                }
                else if(year==4)
                {
                    printf("Enter Semester 1 SGPA:");
                    scanf("%f",&sem1);
                    printf("Enter Semester 2 SGPA:");
                    scanf("%f",&sem2);
                    printf("Enter Semester 3 SGPA:");
                    scanf("%f",&sem3);
                    printf("Enter Semester 4 SGPA:");
                    scanf("%f",&sem4);
                    printf("Enter Semester 5 SGPA:");
                    scanf("%f",&sem5);
                    printf("Enter Semester 6 SGPA:");
                    scanf("%f",&sem6);
                    printf("Enter Semester 7 SGPA:");
                    scanf("%f",&sem7);
                    printf("Enter Semester 8 SGPA:");
                    scanf("%f",&sem8);
                    cgpa=(sem1+sem2+sem3+sem4+sem5+sem6+sem7+sem8)/8;
                }
                else
                {
                    printf("Invalid Year!\n");
                }
                printf("\nStudent Record Added Successfully!\n");
                break;

            case 2:

            printf("\n========== STUDENT RECORD ==========\n");
            printf("Roll Number :%d\n",roll);
            printf("Name        :%s\n",name);
            printf("Year        :%d\n",year);

                if(year==1)
                {
                    printf("Semester 1 SGPA :%.2f\n",sem1);
                    printf("Semester 2 SGPA :%.2f\n",sem2);
                }
                else if(year==2)
                {
                    printf("Semester 1 SGPA :%.2f\n",sem1);
                    printf("Semester 2 SGPA :%.2f\n",sem2);
                    printf("Semester 3 SGPA :%.2f\n",sem3);
                    printf("Semester 4 SGPA :%.2f\n",sem4);
                }
                else if(year==3)
                {
                    printf("Semester 1 SGPA :%.2f\n",sem1);
                    printf("Semester 2 SGPA :%.2f\n",sem2);
                    printf("Semester 3 SGPA :%.2f\n",sem3);
                    printf("Semester 4 SGPA :%.2f\n",sem4);
                    printf("Semester 5 SGPA :%.2f\n",sem5);
                    printf("Semester 6 SGPA :%.2f\n",sem6);
                }

                else if(year==4)
                {
                    printf("Semester 1 SGPA :%.2f\n",sem1);
                    printf("Semester 2 SGPA :%.2f\n",sem2);
                    printf("Semester 3 SGPA :%.2f\n",sem3);
                    printf("Semester 4 SGPA :%.2f\n",sem4);
                    printf("Semester 5 SGPA :%.2f\n",sem5);
                    printf("Semester 6 SGPA :%.2f\n",sem6);
                    printf("Semester 7 SGPA :%.2f\n",sem7);
                    printf("Semester 8 SGPA :%.2f\n",sem8);
                }
                printf("CGPA :%.2f\n",cgpa);
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