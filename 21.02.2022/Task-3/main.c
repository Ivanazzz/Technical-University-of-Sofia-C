#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се прочетат от клавиатурата 3 числа и да се изведе на екрана най-малкото от тях. */

    float firstNum, secondNum, thirdNum, result;
    printf("Enter the first number: ");
    scanf("%f", &firstNum);
    printf("Enter the second number: ");
    scanf("%f", &secondNum);
    printf("Enter the third number: ");
    scanf("%f", &thirdNum);

    if (firstNum <= secondNum && firstNum <= thirdNum) {
        result = firstNum;
    } else if (secondNum <= firstNum && secondNum <= thirdNum){
        result = secondNum;
    } else {
        result = thirdNum;
    }

    printf("%g", result);
    return 0;
}
