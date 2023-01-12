#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    int i, j, k, sum = 0, currentSum;

    for(i = 0; i < 3; i++){
        currentSum = 0;
        for(j = 0; j < 3; j++){
            currentSum += arr[i][j];
        }
        if (i == 0){
                sum = currentSum;
            } else {
                if (currentSum != sum){
                    printf("The square is not magical!");
                    return;
                }
            }
    }

    k = j;
    for(k = 0; k < 3; k++){
        i = 0;
        currentSum = 0;
        for(j = 0; j < 3; j++){
            currentSum += arr[i][j];
            i++;
        }
        if (currentSum != sum){
            printf("The square is not magical!");
            return;
        }
    }

    printf("The square is magical!");
    return 0;
}
