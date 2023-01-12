#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Дадена е редица с N цели числа. Да не намери K тия по големина елемент в редицата. */

    int n, i, k, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter k: ");
    scanf("%d", &k);

    int arr[n];
    printf("Enter the elements in the array: ");

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int biggestNum = INT_MIN;
    for(i = 0; i < n; i++){

    }
    return 0;
}
