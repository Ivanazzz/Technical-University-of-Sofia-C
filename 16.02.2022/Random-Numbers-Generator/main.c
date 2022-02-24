#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define BOOLEAN int
#define FALSE 0

int main()
{
    int i;
    long sum = 0;
    long num;
    long maxEvenNum;
    BOOLEAN isInit = FALSE;

    srand(time(NULL));

    for(i = 0; i < SIZE; ++i){
        num = rand()%50-25;
        printf("%li ",num);
        sum += num;
        if (num%2 == 0){
            if (!isInit){
                isInit =! isInit;
                maxEvenNum = num;
            }
            else if (maxEvenNum < num){
                maxEvenNum = num;
            }
        }
    }
    printf("\nSum = %li\n", sum);
    if (isInit){
        printf("Max Even Number is: %li\n", maxEvenNum);
    }else {
        printf("No even numbers...\n");
    }
    return 0;
}
