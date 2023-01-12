#include <stdio.h>
#include <stdlib.h>

#define rowsCount 3
#define columnsCount 3

int main()
{
    int arr[rowsCount][columnsCount] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j;

    // извеждане на елементите от главния диагонал
    printf("Elements of the main diagonal: ");
    for(i = 0, j = 0; i < rowsCount, j < columnsCount; i++, j++){
                printf("%d ", arr[i][j]);
    }

    printf("\n");

    // извеждане на елементите от второстепенния диагонал
    printf("Elements of the secondary diagonal: ");
    for(i = 0, j = columnsCount - 1; i < rowsCount, j > -1; i++, j--){
        printf("%d ", arr[i][j]);
    }

    printf("\n");

    // извеждане на елементите над главния диагонал
    printf("Elements above the main diagonal: ");
    for(i = 0; i < rowsCount; i++){
        for(j = 0; j < columnsCount; j++){
            if (j > i){
                printf("%d ", arr[i][j]);
            }
        }
    }

    printf("\n");

    // извеждане на елементите под главния диагонал
    printf("Elements below the main diagonal: ");
    for(i = 0; i < rowsCount; i++){
        for(j = 0; j < columnsCount; j++){
            if (j < i){
                printf("%d ", arr[i][j]);
            }
        }
    }
    return 0;
}
