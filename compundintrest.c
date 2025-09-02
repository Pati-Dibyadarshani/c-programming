#include<stdio.h>
#include<math.h>
int main(){
    float principal,rate,time,compound_interest;
    printf("Enter the principal amount: ");
    scanf("%f",&principal);
    printf("Enter the annual interest rate (as a percentage): ");
    scanf("%f",&rate);
    printf("Enter the time period in years: ");
    scanf("%f",&time);
    compound_interest=principal*(pow((1+rate/100),time)-1);
    printf("\nCompound Interest = %.2f\n",compound_interest);
    return 0;
}