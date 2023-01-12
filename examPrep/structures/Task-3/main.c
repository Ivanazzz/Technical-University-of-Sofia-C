#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product{
    char name[20];
    float price;
};

int main()
{
    struct Product *ptr;
    int numberOfProducts = 3;
    ptr = (struct Product *)malloc(numberOfProducts * sizeof(struct Product));

    if(ptr == NULL){
        printf("Error!\n");
        exit(1);
    }

    for(int i = 0; i < numberOfProducts; ++i){
        scanf("%s", (ptr + i)->name);
        scanf("%f", &(ptr + i)->price);
    }

    FILE *fp;
    fp = fopen("data.txt", "w");
    if(fp == NULL){
        printf("Error opening file!");
        exit(2);
    }

    for(int i = 0; i < numberOfProducts; ++i){
        //printf("Product: %s\n", (ptr + i)->name);
        //printf("Price: %.2f\n", (ptr + i)->price);
        //printf("\n");
        fprintf(fp, "%s ", (ptr + i)->name);
        fprintf(fp, "%.2f", (ptr + i)->price);
        fprintf(fp, "\n");
    }

    fclose(fp);

    printf("\n");

    fp = fopen("data.txt", "r");
    if(fp == NULL){
        printf("Error opening file!");
        exit(2);
    }

    char ch;
    while(ch != EOF){
        ch = fgetc(fp);
        putchar(ch);
    }

    fclose(fp);

    printf("\n");
    float priceInput;
    printf("Enter a price to see all the products above this price: ");
    scanf("%f", &priceInput);

    for(int i = 0; i < numberOfProducts; ++i){
        if((ptr + i)->price >= priceInput){
            printf("\n");
            printf("Product: %s\n", (ptr + i)->name);
            printf("Price: %.2f\n", (ptr + i)->price);
        }
    }

    free(ptr);
    return 0;
}
