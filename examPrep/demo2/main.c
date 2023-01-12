#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[20];
    int age;
};

int main()
{
    struct Student *kevin;
    kevin = (struct Student *)malloc(2 * sizeof(struct Student));
    if(kevin == NULL){
        printf("Error!");
        exit(2);
    }

    for(int i = 0; i < 2; i++){
        scanf("%s", (kevin + i)->name);
        scanf("%d", &(kevin + i)->age);
    }

    FILE *fp;
    fp = fopen("new.txt", "w");
    if(fp == NULL){
        printf("Error opening file!");
        exit(1);
    }

    for(int i = 0; i < 2; i++){
        fprintf(fp, "%s %d\n", (kevin + i)->name, (kevin + i)->age);
    }

    fclose(fp);
    free(kevin);
    return 0;
}
