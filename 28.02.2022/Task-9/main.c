#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* По въведени параметри за лице на трапец пресметнете лицето му. */

    int a, b, h;

    printf("Enter the size of side 'a' of the trapezoid: ");
    scanf("%d", &a);
    printf("Enter the size of side 'b' of the trapezoid: ");
    scanf("%d", &b);
    printf("Enter the size of hight 'a' of the trapezoid: ");
    scanf("%d", &h);

    float area = (a + b) * h / 2.0;

    printf("The area of the trapezoid is: %g", area);
    return 0;
}
