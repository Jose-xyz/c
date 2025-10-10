
#include<stdio.h>


int main()
{
    int scores[5] = {0}; // if dont add 0 here, we undefined behavior

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &scores[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", scores[i]);
    }
       
    return 0;
}
    