#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, dchoice, opin, npin1, npin2;
    float balance, amount, serviceCharge, enteredPin;
    
    const float initialPin = 6987;   // initial ATM pin
    balance = 5800;                   // initial user balance
    serviceCharge = 10;               // service charge per withdrawal

    printf("Welcome to the ATM!\nEnter your 4-digit PIN: ");
    scanf("%f", &enteredPin);

    if (enteredPin != initialPin) {
        printf("Entered PIN is incorrect. Access denied!\n");
        exit(0);
    }

    while (1) {
        if (balance < 6000)
            printf("\n<!!!!!!!!!!!!!!!!!!!!>\nNOTE: Your balance is below 6000. Please deposit more soon!\n<!!!!!!!!!!!!!!!!!!!!>\n");

        printf("\n***** ATM MENU *****\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Change ATM PIN\n");
        printf("5. Verify ATM PIN\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Your account balance is: %.2f\n", balance);
            break;

        case 2:
            printf("Deposit Mode:\n1. Cash\n2. UPI\n3. Salary Credit\n4. Go Back\n");
            scanf("%d", &dchoice);
            switch (dchoice) {
            case 1:
                printf("Enter cash amount: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Amount deposited successfully! New balance: %.2f\n", balance);
                } else
                    printf("Minimum deposit amount is 1.\n");
                break;

            case 2:
                printf("Enter UPI amount: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("UPI transfer successful! New balance: %.2f\n", balance);
                } else
                    printf("Minimum deposit amount is 1.\n");
                break;

            case 3:
                amount = 70000; // fixed salary credit
                balance += amount;
                printf("Salary credited! %.2f added. Balance: %.2f\n", amount, balance);
                break;

            case 4:
                break;

            default:
                printf("Invalid deposit option.\n");
                break;
            }
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= 0) {
                printf("Amount must be greater than 0.\n");
            } else if (amount + serviceCharge > balance) {
                printf("Insufficient balance! Transaction cancelled.\n");
            } else {
                balance -= (amount + serviceCharge);
                printf("Service charge of %.2f applied.\n", serviceCharge);
                printf("Amount %.2f withdrawn successfully. New balance: %.2f\n", amount, balance);
            }
            break;

        case 4:
            printf("Enter your current ATM PIN: ");
            scanf("%d", &opin);
            if (opin == initialPin) {
                printf("Enter new PIN: ");
                scanf("%d", &npin1);
                printf("Confirm new PIN: ");
                scanf("%d", &npin2);
                if (npin1 == npin2) {
                    printf("Your new ATM PIN has been set.\n");
                    // Update PIN
                    enteredPin = npin2;
                } else {
                    printf("New PINs do not match. Try again.\n");
                }
            } else {
                printf("Incorrect current PIN.\n");
            }
            break;

        case 5:
            printf("Enter your ATM PIN: ");
            scanf("%d", &opin);
            if (opin == enteredPin)
                printf("Your PIN is valid.\n");
            else
                printf("This PIN is not valid.\n");
            break;

        case 6:
            printf("Thanks for using the ATM!\n");
            exit(0);

        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }
    }

    return 0;
}
