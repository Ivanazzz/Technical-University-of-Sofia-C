#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int i, sum = 0;
    int flag = 1;

    for (i = 0; i < 7; i++){
        sum += arr[i];
    }

    double average = sum * 1.00 / 7;

    for (i = 0; i < 7; i++){
        if (average == arr[i]){
            int averageInt = (int)average;
            printf("Average value %d, closest value %d on %d place", averageInt, arr[i], i + 1);
            flag = 0;
        }
    }

    if (flag == 1){
        int closestNumPosition;
        int closestNum;
        double difference;
        double smallestDifference;
        for(i = 0; i < 7; i++){
            difference = abs(arr[i] - average);
            if (i == 0){
                smallestDifference = difference;
                closestNum = arr[i];
                closestNumPosition = i + 1;
            } else {
                if(difference < smallestDifference){
                    smallestDifference = difference;
                    closestNum = arr[i];
                    closestNumPosition = i + 1;
                }
            }
        }
        printf("Average value %.2f, closest value %d on %d place", average, closestNum, closestNumPosition);
    }
    return 0;
}
