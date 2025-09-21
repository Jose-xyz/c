#include <stdio.h>
#include <math.h>

int main(){
    
    // compound interest calc
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timeCompounded = 0;
    double total = 0.0;

    printf("Compound interest Calc\n");
    
    printf("Enter principal (P): ");
    scanf("%lf", &principal);
    
    printf("Enter interest rate percent (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &years);
    printf("Enter # of time compounded per year (n): ");
    scanf("%d", &timeCompounded);

   total = principal * pow(1 + rate / timeCompounded, timeCompounded * years);

   printf(" After %d years the total will be $%.2lf", years, total);
    
    return 0;
}