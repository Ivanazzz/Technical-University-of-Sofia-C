#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Числата на Фибоначи започват от 0 и 1, като всяко следващо се получава като сума от предходните две.
    Можете да намерите първите n числа на Фибоначи с for цикъл от 1 до n, като на всяка итерация пресмятате
    поредното число, използвайки предходните две (които ще пазите в две допълнителни променливи). */

    int a = 0;
    int b = 1;
    int n, i, c;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("%d", a);
    } else if (n > 1){
        for (i = 1; i <= n; i++) {
            printf("%d ", a);
            c = a + b;
            a = b;
            b = c;

            }
        }
    return 0;
}
