#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Направете програма, която проверява дали един квадрат е магически
    (сумите на числата във всички редове и колони да е равна на едно и също число).  */

    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j, number;
    int sum = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++) {
            sum += array[i][j];
        }
    }

    if (sum == number) {
        printf("True!");
    } else {
        printf("False!");
    }
    return 0;
}
