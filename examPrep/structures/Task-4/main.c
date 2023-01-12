#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[20];
    float averageGrade;
};

int main()
{
    int numberOfStudents = 3;
    struct Student *ptr;
    ptr = (struct Student *)malloc(numberOfStudents * sizeof(struct Student));

    if(ptr == NULL){
        printf("Error opening file!");
        exit(1);
    }

    for(int i = 0; i < numberOfStudents; i++){
        scanf("%s %f", (ptr + i)->name, &(ptr + i)->averageGrade);
    }

    printf("\n");
    for(int i = 0; i < numberOfStudents; i++){
        printf("Student's name: %s\n", (ptr + i)->name);
        printf("Average grade: %.2f\n", (ptr + i)->averageGrade);
    }

    FILE *fp;
    fp = fopen("data.bin", "wb");
    if(fp == NULL){
        printf("Error opening file!");
        exit(2);
    }

    fclose(fp);
    free(ptr);
    return 0;
}
