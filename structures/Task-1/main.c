#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int peopleCount;
    char command[10];

    int boughtChairs = 0;
    int boughtTables = 0;
    int boughtCups = 0;
    int boughtDishes = 0;
    float totalPrice = 0;


    scanf("%d", &peopleCount);

    while(1){
        scanf("%s", command);
        if((strcmp(command, "PARTY!")) == 0){
            break;
        }else {
            if ((strcmp(command, "Chair")) == 0){
                boughtChairs++;
            } else if ((strcmp(command, "Table")) == 0){
                boughtTables++;
            } else if ((strcmp(command, "Cups")) == 0){
                boughtCups++;
            } else if ((strcmp(command, "Dishes")) == 0){
                boughtDishes++;
            }
        }
    }

    totalPrice = (boughtChairs * 13.99) + (boughtTables * 42) + (boughtCups * 5.98) + (boughtDishes * 21.02);
    printf("%.2f\n", totalPrice);

    int neededChairs = peopleCount - boughtChairs;
    if (neededChairs != 0){
        printf("%d Chairs\n", neededChairs);
    }

    int peopleWithoutTable = peopleCount - (boughtTables * 8);
    int neededTables = (int)ceil(peopleWithoutTable * 1.00 / 8);
    if (neededTables != 0) {
        printf("%d Tables\n", neededTables);
    }

    int peopleWithoutCups = peopleCount - (boughtCups * 6);
    int neededCups = (int)ceil(peopleWithoutCups * 1.00 / 6);
    if (neededCups != 0) {
        printf("%d Cups\n", neededCups);
    }

    int peopleWithoutDishes = peopleCount - (boughtDishes * 6);
    int neededDishes = (int)ceil(peopleWithoutDishes * 1.00 / 6);
    if (neededDishes != 0) {
        printf("%d Dishes\n", neededDishes);
    }
    return 0;
}
