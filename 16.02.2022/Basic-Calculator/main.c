#include <stdio.h>
#include <stdlib.h>

int main()
{
    float firstNumber, secondNumber, result;

    printf("Enter the first number: ");
    scanf("%f", &firstNumber);
    printf("Enter the second number: ");
    scanf("%f", &secondNumber);

    result = firstNumber + secondNumber;
    printf("The result is: %g", result);
    return 0;
}
