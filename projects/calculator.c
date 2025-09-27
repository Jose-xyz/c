#include <stdio.h>

int main(){
    // calculator program

    char operator = '\0'; // null terminator
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &num1); 
    
    printf(" Enter the operator (+ - * /): ");
    scanf(" %c", &operator); // clear \n from input buffer
    
    printf("Enter the : ");
    scanf("%lf", &num2); 
    
    switch(operator){

        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '/':                                // example of nested if statement in switch/case
            if(num2 == 0){
                printf("You can't divide by zero!\n");
            }
            else{
                result = num1 / num2;
            }
            break;
        case '*':
            result = num1 * num2;
            break;
        default:
            printf("Invalid Operator\n");
    }

    printf("Result: %.4lf", result);
    return 0;
}





