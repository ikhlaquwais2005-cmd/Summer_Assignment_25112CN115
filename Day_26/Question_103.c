#include <stdio.h>
int main()
{
    int card;
    int pin=1234;
    int enteredPin;
    int choice=0;
    float balance=10000;
    float amount;

    printf("********** ATM **********\n\n");
    printf("Please insert your ATM card\n");
    printf("Press 1 to insert card:- ");
    scanf("%d",&card);

    if(card==1)
    {
        printf("Card inserted successfully");
    }
    else
    {
        printf("Card not inserted\n Request cancelled\n");
        printf("Thank you for using our ATM!");
        return 0;
    }


    printf("Enter your PIN:");
    scanf("%d",&enteredPin);
    if(enteredPin!=pin)
    {
        printf("Invalid PIN");
        return 0;
    }
    while(choice!=5)
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Change PIN\n");
        printf("5. Exit\n");
        printf("Enter your desired function:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Current Balance=%.2f\n",balance);
                break;

            case 2:
                printf("Enter the amount to deposit:");
                scanf("%f",&amount);
                balance=balance+amount;
                printf("Amount Deposited Successfully.\n");
                printf("Current Balance=%.2f\n",balance);
                break;

            case 3:
                printf("Enter amount to withdraw:");
                scanf("%f",&amount);
                if(amount<=balance)
                {
                    balance=balance-amount;
                    printf("Please collect your cash.\n");
                    printf("Current Balance=%.2f\n", balance);
                }
                else
                {
                    printf("Insufficient Balance.\n");
                }
                break;

            case 4:
                printf("Enter current PIN:");
                scanf("%d",&enteredPin);

                if(enteredPin==pin)
                {
                    printf("Enter new PIN:");
                    scanf("%d",&pin);
                    printf("PIN changed successfully.\n");
                }
                else
                {
                    printf("Incorrect current PIN.\n");
                }
                break;

            case 5:
                printf("Thank you for using our ATM.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }
    }
    return 0;
}