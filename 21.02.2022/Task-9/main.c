#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се напише програма, при която се въвеждат две числа N и К. След това се въвеждат
    още N числа и се извежда броят на числата, които са по-големи от K и се делят на 3. */

    int N, K, number;
    unsigned int i = 1;
    unsigned int numbersCount = 0;

    printf("Enter the count of the numbers: ");
    scanf("%d", &N);
    printf("Enter special number: ");
    scanf("%d", &K);

    while (i <= N) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > K) {
            if (number % 3 == 0) {
                numbersCount++;
            }
        }
        i++;
    }

    printf("The count of numbers is: %d", numbersCount);
    return 0;
}
