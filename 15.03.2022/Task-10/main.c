#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Дадени са n-цели числа в интервала [1…1000]. От тях някакъв процент p1 са под 200, друг процент p2
    са от 200 до 399, друг процент p3 са от 400 до 599, друг процент p4 са от 600 до 799 и останалите p5
    процента са от 800 нагоре. Да се напише програма, която изчислява и отпечатва процентите p1, p2, p3, p4 и p5.  */

    int n, i, number;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    float p1, p2, p3, p4, p5;

    printf("Enter the amount of numbers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number: ");
        scanf("%d", &number);

        if (number < 200){
            count1++;
        } else if (number < 400){
            count2++;
        } else if (number < 600) {
            count3++;
        } else if (number < 800) {
            count4++;
        } else {
            count5++;
        }
    }

    p1 = (count1 * 1.00 / n) * 100;
    p2 = (count2 * 1.00 / n) * 100;
    p3 = (count3 * 1.00 / n) * 100;
    p4 = (count4 * 1.00 / n) * 100;
    p5 = (count5 * 1.00 / n) * 100;

    printf("Numbers to 199 - %g\n", p1);
    printf("Numbers from 200 to 399 - %g\n", p2);
    printf("Numbers from 400 to 599 - %g\n", p3);
    printf("Numbers from 600 to 799 - %g\n", p4);
    printf("Numbers greater than 800 - %g\n", p5);

    return 0;
}
