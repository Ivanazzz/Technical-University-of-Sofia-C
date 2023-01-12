#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int num = 45;
    int i, j;
    int sum = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            sum += arr[i][j];
        }
    }

    if (num == sum){
        printf("The square is magical!");
    } else {
        printf("The square is not magical!");
    }
    return 0;
}
