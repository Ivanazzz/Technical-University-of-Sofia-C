#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* По дадени координатите на три точки, не лежащи на една права, намерете лицето на триъгълника, формиран от тях. */

    int x1, x2, x3, y1, y2, y3;

    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter y1: ");
    scanf("%d", &y1);
    printf("Enter x2: ");
    scanf("%d", &x2);
    printf("Enter y2: ");
    scanf("%d", &y2);
    printf("Enter x3: ");
    scanf("%d", &x3);
    printf("Enter y3: ");
    scanf("%d", &y3);

    float area = 0.5*(abs(x1-x2 )*abs(y1+y2)+abs(x2-x3)*abs(y2+y3)+abs(x3-x1)*abs(y3+y1));

    printf("The area of the triangle is: %g", area);
    return 0;
}
