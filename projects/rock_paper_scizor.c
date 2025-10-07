#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Our function prototypes

int getComputerChoice();
int getUserChoice();
int checkWinner(int userChoice, int computerChoice);

//Our main

int main(){
    
    
    srand(time(NULL));
    printf(" roshambo ");

    int userChoice = getUserChoice();
    int computerChoice= getComputerChoice();    
    
    switch (userChoice)
    {
        case 1:
            printf("You chose Rock\n");
            break;
        case 2:
            printf("You chose Paper\n");
            break;
        case 3:
            printf("You chose Scizor\n");
            break;
    }
    
     switch (computerChoice)
    {
        case 1:
            printf("Computer chose Rock\n");
            break;
        case 2:
            printf("Computer chose Paper\n");
            break;
        case 3:
            printf("Computer chose Scizor\n");
            break;
    }

    checkWinner(userChoice, computerChoice);
    
    ;
    return 0;
}


// Our Functions defined

int getComputerChoice(){
    return (rand() % 3) + 1;
}


int getUserChoice(){

    int choice = 0;
    
    do{
        printf("Choose an option (1 - 3) \n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scizor\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }while (choice < 1 || choice > 3); 
}


int checkWinner(int userChoice, int computerChoice){

    if (userChoice == computerChoice)
    {
        printf(" Its a tie\n");
        main(); // added main() here to run the program again. there must be a winner!!
    }
    else if ((userChoice == 1 && computerChoice == 3) || (userChoice == 2 && computerChoice == 1) || (userChoice == 3 && computerChoice == 2))        
    {
        printf("you win!");
    }
    else
    {
        printf("You lose");
    }
}



//Rock Paper Scissors


