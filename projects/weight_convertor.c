#include <stdio.h>


// Weight converter app

int main(){

    int choice = 0;

    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calc\n");
    printf("1. Kilos to #s\n");
    printf("2. #s to Kilos\n");
    printf("Enter your choice (1 or 2): ");

    scanf("%d", &choice);

    if(choice == 1 ){
        //
        printf("Enter the weight in kilos: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    }
    else if (choice == 2 ){
        //
        printf("Enter the weight in #s: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilos\n", pounds, kilograms);
    }
    else{
        //
        printf("Invalid choice! Please enter 1 or 2!");
    } 


    return 0;
}