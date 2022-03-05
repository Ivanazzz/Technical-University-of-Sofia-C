#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float squareArea();
float rectangleArea();
float triangleArea();
float circleArea();

int main()
{
    /* Да се напише програма, в която се въвежда цяло число, което представлява код на геометрична
    фигура – 1 – квадрат, 2 – правоъгълник, 3 – правоъгълен триъгълник, 4 – окръжност. След това се
    въвеждат размерите на избраната геометрична фигура. Програмата трябва да изведе типа на геометричната
    фигура, както и нейното лице. За пресмятането на лицето да се напишат подходящи функции  */

    int figureType;

    printf("Enter 1(square), 2(rectangle), 3(triangle), 4(circle): ");
    scanf("%d", &figureType);

    switch(figureType) {
        case 1:
            printf("The area of the square is equal to: %g", squareArea());
            break;
        case 2:
            printf("The area of the rectangle is equal to: %g", rectangleArea());
            break;
        case 3:
            printf("The area of the triangle is equal to: %g", triangleArea());
            break;
        case 4:
            printf("The area of the circle is equal to: %g", circleArea());
            break;
    }
    return 0;
}

float squareArea() {
    float a;
    printf("Enter the value of the side: ");
    scanf("%f", &a);
    float result = a * a;
    return result;
}

float rectangleArea() {
    float a, b;
    printf("Enter the value of the first side: ");
    scanf("%f", &a);
    printf("Enter the value of the second side: ");
    scanf("%f", &b);
    float result = a * b;
    return result;
}

float triangleArea() {
    float a, b;
    printf("Enter the value of the first side: ");
    scanf("%f", &a);
    printf("Enter the value of the second side: ");
    scanf("%f", &b);
    float result = a * b;
    return result;
}

float circleArea() {
    float r;
    printf("Enter the value of the radius: ");
    scanf("%f", &r);
    float result = r * r * M_PI;
    return result;
}
