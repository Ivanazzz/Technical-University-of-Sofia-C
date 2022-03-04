#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която показва знака (+ или -) от произведението на три реални числа,
    без да го пресмята. Използвайте последователност от if оператори. */

    int firstNum, secondNum, thirdNum;

    printf("Enter the first number: ");
    scanf("%d", &firstNum);
    printf("Enter the second number: ");
    scanf("%d", &secondNum);
    printf("Enter the third number: ");
    scanf("%d", &thirdNum);

    if (firstNum == 0 || secondNum == 0 || thirdNum == 0) {
        printf("The result equals to zero!");
    } else if (firstNum < 0 || secondNum < 0 || thirdNum < 0) {
        printf("The result will be negative number!");
    } else {
        printf("The result will be positive number!");
    }
    return 0;
}
