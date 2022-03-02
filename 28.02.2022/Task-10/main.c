#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* По дадени координатите на два срещуположни ъгъла на правоъгълник чрез точки А и Б,
    намерете лицето на правоъгълника, който е ограничен от двете точки. */

    int x1, x2, x3, y1, y2, y3, area;

    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter y1: ");
    scanf("%d", &y1);
    printf("Enter x2: ");
    scanf("%d", &x2);
    printf("Enter y2: ");
    scanf("%d", &y2);

    x3 = abs(x2 - x1);
    y3 = abs(y2 - y1);
    area = x3 * y3;

    printf("The area of the rectangle is: %d", area);
    return 0;
}
