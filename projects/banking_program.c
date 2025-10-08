// Banking Program

#include <stdio.h>



void checkBalance(float balance);
float desposit();
float withdraw(float balance);


int main(){

    int choice = 0;
    float balance = 0.0f;

    printf("*** Welcome to your ATM Gang! ***");

    do
    {
        printf("\nSelect an option: \n");
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += desposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\nThank you, have a nice day!\n");
                break;
        }

    } while (choice != 4);
    
    return 0;
}

void checkBalance(float balance){
    printf("\nYour Balance: $%.2f\n", balance);
}

float desposit(){
    float amount = 0.0f;

    printf("\n Enter amount to deposit: $");
    scanf("%f", &amount);

    if (amount < 0)
    {
        printf("\nInvalid\n");
        return 0.0f;
    }
    else
    {
        printf("\nSuccessfully deposited $%.2f\n", amount);
        return amount;
    }
    
    
    return 0.0f;
}
float withdraw(float balance){

    float amount = 0.0f;

    printf("\n Enter amount to withdraw: $");
    scanf("%f", &amount);
   
    if (amount < 0)
    {
        printf("\nInvalid\n");
        return 0.0f;
    }
    else if (amount > balance)
    {
        printf("\nNot enough bread my g. Your balance is $%.2f\n", balance);
        return 0.0f;
    }
    
    else
    {
        printf("\nSuccessfully withdrew $%.2f\n", amount);
        return amount;
    }


    return 0.0f;

}

