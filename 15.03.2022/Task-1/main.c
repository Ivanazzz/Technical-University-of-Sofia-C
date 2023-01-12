#include <stdio.h>
#include <stdlib.h>

int maxNum(int, int);
int minNum(int, int);
void minAndMax();

int main()
{
    /* Напишете функция, която получава две числа и връща по – голямото от тях. Направете същото и за по -  малкото.
    Демонстрирайте работата на функциите като четете множество числа до въвеждане на 0 и изкарате най – голямото
    въведено и най-малкото въведено число.   */

    printf("%d\n", maxNum(5, 8));
    printf("%d\n", minNum(2, 9));
    minAndMax();
    return 0;
}


int maxNum(int num1, int num2) {
    int result;
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

int minNum(int num1, int num2) {
    int result;
    if (num1 < num2) {
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

void minAndMax() {
    int number, counter = 1;
    int min, max;
    while (1) {
        printf("Enter number: ");
        scanf("%d", &number);

        if (number == 0){
            break;
        } else {
            if (counter == 1) {
               min = number;
               max = number;
               counter++;
            } else {
                if (number > max) {
                    max = number;
                }
                if (number < min) {
                    min = number;
                }
            }
        }
    }

    printf("The min number is: %d\n", min);
    printf("The max number is: %d\n", max);
}
