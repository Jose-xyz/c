/*
realloc() = Reallocation
Resize previously allocated memory

realloc(ptr, bytes)
*/




#include <stdio.h>
#include <stdlib.h>


int main(){

    int number = 0;
    printf("Enter number of prices: ");
    scanf("%d", &number);
    
    int *prices = malloc(number * sizeof(int));

    if (prices == NULL)
    {
        printf("Memory allocaton failed\n");
        return 1;
    }
    
    for (int i = 0; i < number; i++)
    {
        printf("Enter price #%d: ", i + 1);
        scanf("%d", &prices[i]);
    }

    int newNumber = 0;
    printf("Enter a new number of prices: ");
    scanf("%d", &newNumber);

    int *temp = realloc(prices, newNumber * sizeof(int));

    if (temp == NULL)
    {
        printf("Could not reallocate memory!\n");
    }
    else
    {
        prices = temp;
        temp = NULL;

        for (int i = number; i < newNumber; i++)
        {
            printf("Enter price #%d: ", i + 1);
            scanf("%d", &prices[i]);
        }
        
        for (int i = 0; i < newNumber; i++)
        {
            printf("$%d ", prices[i]);
        }    
    }


    
    free(prices);
    prices = NULL;

    


    return 0;
}



