#include <stdio.h>

int main() 
{
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("\nAddition = %d", a + b);
    printf("\nSubtraction = %d", a - b);
    printf("\nMultiplication = %d", a * b);
    printf("\nDivision = %d", a / b);
    printf("\nModulus = %d", a % b);
    
    return 0;
}