#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7] = {89, -123, 45, 196, 1204, 0, 112};
    int i, sum = 0;

    for(i = 0; i < 7; i++){
        sum += arr[i];
    }

    double average = sum * 1.00 / 7;
    printf("The sum is: %.3f", average);
    return 0;
}
