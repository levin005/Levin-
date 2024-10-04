#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Input principal amount, rate of interest, and time period
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);
    
    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}