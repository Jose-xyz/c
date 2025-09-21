#include <stdio.h>
#include <string.h>


int main(){
// shopping cart program

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("what item would you like?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0'; // \0 is a null termenator(sp?)
    
    printf("what is the price for each?: ");
    scanf("%f", &price);

    printf("how many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;
    
    printf("\n you have bought %d %s(s) for ", quantity, item);
    printf("%c%.2f\n", currency, total);
return 0;

}