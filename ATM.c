#include<stdio.h>
int main(){
    int choice;
    printf("ATM Machine\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Your balance is $1000\n");
            break;
        case 2:
            printf("Deposit feature is currently unavailable.\n");
            break;
        case 3:
            printf("Withdraw feature is currently unavailable.\n");
            break;
        case 4:
            printf("Thank you for using the ATM. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
    return 0;
}