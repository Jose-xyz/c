#include <stdio.h>
#include <stdbool.h>

int main(){

    float price = 10.00;
    bool isStudent = false; // % discount
    bool isSenior = true; // % discount

    // Student = $9
    // Senior = $8
    // Student + Senior = $7
    

    //if you error using one % sign in the print statement, use %% to escape for %
    // idk why but in the Bro Code's video he does not get compile errors.



     if (isStudent)
     {
        if (isSenior)
        {
            printf("You get a student discount of 10%%\n");
            printf("You get a senior discount of 20%%\n");
            price *= 0.7;
        }
        else
        {
            printf("You get a student discount of 10%%");
            price *= 0.9;
        }
     }
     
    else if (isSenior)
    {
        printf("You get a senior discount of 20%%\n");
        price *= 0.8;
    }
        
     else
    {
        printf("You are a working adult, pay full price!\n");
    }

     
    printf("Price of ticket is is: $%.2f\n", price);

    return 0;
}