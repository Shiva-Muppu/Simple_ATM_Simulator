#include <stdio.h>
int main()
{
    int pin, deposit_amount, withdrawal_amount;
    int Actual_amount = 1200;
    int correct_pin = 1234;
    printf("enter the pin:");
    scanf("%d", &pin);
    if (pin == correct_pin)
    {
        printf("PIN Accepted \n");
        int choice;
        printf("enter the choice:(1. Check Balance  2. Deposit  3. Withdraw  4. Exit): \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("1.Check Balance:%d \n", Actual_amount);
            break;
        case 2:
            printf("2.Deposit \n");
            printf("enter the deposit_amount:");
            scanf("%d", &deposit_amount);
            printf("Amount deposited successfully. Current Balance:$%d \n", (Actual_amount=(Actual_amount) + (deposit_amount)));
            break;
        case 3:
            printf("3.Withdraw \n");
            printf("Enter withdrawal_amount:");
            scanf("%d", &withdrawal_amount);
            printf("Amount withdrawn successfully. Current Balance:$%d \n", (Actual_amount=((Actual_amount) - (withdrawal_amount))));
            break;
        case 4:
            printf("4.Exit \n");
            break;
        default:
            printf("enter the correct choice \n");
        }
    }
    else
    {
        printf("Entered Wrong Pin \n");
    }
    printf("Thank you for using the ATM. Goodbye!");
    return 0;
}