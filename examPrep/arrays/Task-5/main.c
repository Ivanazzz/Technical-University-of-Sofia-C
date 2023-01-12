#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Всяка редица от равни числа в едномерен сортиран масив, се нарича площадка. Да се напише
    програма, която намира началото и дължината на най-дългата площадка в даден сортиран във
    възходящ ред едномерен масив(въвеждат се N и самият масив от потребителя). */

    int n, i;
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in the array: ");

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int sameElemetsNumber = 0, counter = 0;
    int elementsValue;
    for(i = 0; i < n; i++){
        if(i == 0){
            elementsValue = arr[i];
            counter++;
        } else {
            if(elementsValue != arr[i]){
                elementsValue = arr[i];
                if(counter > sameElemetsNumber){
                    sameElemetsNumber = counter;
                    counter = 0;
                }
                counter++;
            } else{
                counter++;
            }
        }
    }

    printf("The most common element: %d", sameElemetsNumber);
    return 0;
}
