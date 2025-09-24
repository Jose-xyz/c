#include <stdio.h>




int main(){

    //  Temp conversion program

    char choice = '\0'; // null terminator
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temp Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the in Celsius (C) or fahrenheit (F)\n");

    scanf("%c", &choice);

    if( choice == 'C'){
        printf("Enter the temp in Celcius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 /5) + 32; // C to F
        printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius, fahrenheit);
    }
    else if( choice == 'F'){
        printf("Enter the temp in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit -32) * 5 / 9; // F to C
        printf("%.1f fahrenheit is equal to %.1f celsius\n", fahrenheit, celsius);
    }
    else{
        printf("Please select C or F player one");
    }

    return 0;
}


// can be improved by add in case insenstivity 