#include <stdio.h>
int main()
{
    int choice=0;
    int roll;
    char name[50];
    float english,maths,science,computer,hindi;
    float total,percentage;

    while(choice!=3)
    {
        printf("\n========== MARKSHEET GENERATION SYSTEM ==========\n");
        printf("1. Create Marksheet\n");
        printf("2. Display Marksheet\n");
        printf("3. Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:

                printf("Enter Roll Number:");
                scanf("%d",&roll);
                printf("Enter Name;");
                scanf("%s",&name);
                printf("Enter English Marks:");
                scanf("%f",&english);
                printf("Enter Maths Marks:");
                scanf("%f",&maths);
                printf("Enter Science Marks:");
                scanf("%f",&science);
                printf("Enter Computer Marks:");
                scanf("%f",&computer);
                printf("Enter Hindi Marks:");
                scanf("%f",&hindi);

                total=english+maths+science+computer+hindi;
                percentage=total/5;
                printf("\nMarksheet Created Successfully.\n");
                break;

            case 2:
                printf("\n========== MARKSHEET ==========\n");
                printf("Roll Number :%d\n",roll);
                printf("Name        :%s\n",name);
                printf("\nEnglish  :%.2f\n",english);
                printf("Maths    :%.2f\n",maths);
                printf("Science  :%.2f\n",science);
                printf("Computer :%.2f\n",computer);
                printf("Hindi    :%.2f\n",hindi);
                printf("\nTotal     :%.2f / 500\n",total);
                printf("Percentage:%.2f%%\n",percentage);

                if(percentage>=90)
                {
                    printf("Grade:A\n");
                }
                else if(percentage>=80)
                {
                    printf("Grade:B\n");
                }
                else if(percentage>=70)
                {
                    printf("Grade:C\n");
                }
                else if(percentage>=60)
                {
                    printf("Grade:D\n");
                }
                else if(percentage>=40)
                {
                    printf("Grade:E\n");
                }
                else
                {
                    printf("Grade:F(Fail)\n");
                }
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