#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product{
    char productName[31];
    int id;
    char expirationDate[11];
    float price;
};

int main()
{
    struct Product *ptr;
    int numberOfRecords = 2;
    ptr = (struct Product *)malloc(numberOfRecords * sizeof(struct Product));

    if(ptr == NULL){
        exit(1);
    }else{
        printf("Continue\n");
    }

    for(int i = 0; i < numberOfRecords; ++i){
        scanf("%s", (ptr + 1)->productName);
        scanf("%d", &(ptr + 1)->id);
        scanf("%s", (ptr + 1)->expirationDate);
        scanf("%f", &(ptr + 1)->price);
    }

    printf("\n");
    for(int i = 0; i < numberOfRecords; ++i){
        printf("Product name: %s\n", (ptr + i)->productName);
        printf("Product ID: %d\n", (ptr + i)->id);
        printf("Expiration date: %s\n", (ptr + i)->expirationDate);
        printf("Product price: %.2f\n", (ptr + i)->price);
    }

    free(ptr);
    return 0;
}
