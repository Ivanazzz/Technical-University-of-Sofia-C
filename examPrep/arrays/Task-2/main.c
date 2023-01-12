#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int arr[7] = {89, -123, 45, 196, 1204, 0, 112};
    int i;
    int biggestNum = INT_MIN;

    for(i = 0; i < 7; i++){
        if (arr[i] > biggestNum){
            biggestNum = arr[i];
        }
    }

    printf("The sum is: %d", biggestNum);
    return 0;
}
