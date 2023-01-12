#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се напише програма, която чете 3 числа и отпечатва дали са еднакви (yes / no). */

    int num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3){
        printf("Yes!");
    } else {
        printf("No!");
    }
    return 0;
}
