#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която получава масив от N елемента и обръща реда на елементите. Изкарайте ново полученият масив. */

    int n, i, j, a, current;
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in the array: ");

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    if(n % 2 == 0){
        a = n / 2;
    } else {
        a = (n - 1) / 2;
    }

    for(i = 0, j = n - 1; i < a, j > a; i++, j--){
        current = arr[i];
        arr[i] = arr[j];
        arr[j] = current;
    }

    printf("\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
