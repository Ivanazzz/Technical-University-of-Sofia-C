#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която чете от конзолата поредица от цели числа и отпечатва най-малкото и най-голямото от тях. */

    int number, numbersCount, i;
    int maxNumber = 0;
    int minNumber = 0;

    printf("Enter the count of the numbers: ");
    scanf("%d", &numbersCount);

    for (i = 1; i <= numbersCount; i++) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (i == 1) {
            maxNumber = number;
            minNumber = number;
        } else {
            if (number > maxNumber) {
                maxNumber = number;
            }
            if (number < minNumber) {
                minNumber = number;
            }
        }
    }


    printf("The max number is: %d\n", maxNumber);
    printf("The min number is: %d\n", minNumber);
    return 0;
}
