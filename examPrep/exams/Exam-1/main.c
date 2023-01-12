#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[20];
    int age;
    char specialty[10];
    char facultyNumber[11];
    float averageGrade;
};

int main()
{
    int numberOfStudents;
    scanf("%d", &numberOfStudents);

    struct Student *ptr;
    ptr = (struct Student *)malloc(numberOfStudents * sizeof(struct Student));

    if(ptr == NULL){
        printf("Error!");
        exit(1);
    }

    for(int i = 0; i < numberOfStudents; i++){
        scanf("%s", (ptr + i)->name);
        scanf("%d", &(ptr + i)->age);
        scanf("%s", (ptr + i)->specialty);
        scanf("%s", (ptr + i)->facultyNumber);
        scanf("%f", &(ptr + i)->averageGrade);
    }

    FILE *fp;
    fp = fopen("data.txt", "w");
    if(fp == NULL){
        printf("Error opening file");
        exit(2);
    }

    for(int i = 0; i < numberOfStudents; i++){
        fprintf(fp, "%s ", (ptr + i)->name);
        fprintf(fp, "%d ", (ptr + i)->age);
        fprintf(fp, "%s ", (ptr + i)->specialty);
        fprintf(fp, "%s ", (ptr + i)->facultyNumber);
        fprintf(fp, "%.2f", (ptr + i)->averageGrade);
        fprintf(fp, "\n");
    }

    fclose(fp);

    /*fp = fopen("data.bin", "wb");
    if(fp == NULL){
        printf("Error opening file!");
        exit(2);
    }*/

    float neededGrade;
    scanf("%f", &neededGrade);
    float currentGrade;

    for(int i = 0; i < numberOfStudents; i++){  // изкарване на конзолата
        currentGrade = (ptr + i)->averageGrade;
        if(currentGrade >= neededGrade){
            printf("%s ", (ptr + i)->name);
            printf("%d ", (ptr + i)->age);
            printf("%s ", (ptr + i)->specialty);
            printf("%s ", (ptr + i)->facultyNumber);
            printf("%.2f", (ptr + i)->averageGrade);
            printf("\n");
        }
    }

    /*for(int i = 0; i < numberOfStudents; i++){
        currentGrade = (ptr + i)->averageGrade;
        if(currentGrade >= neededGrade){
            fwrite((ptr + i)->name, sizeof(name), 1, fp);
            fwrite((ptr + i)->age, sizeof(age), 1, fp);
            fwrite((prt + i)->specialty, sizeof(specialty), 1, fp);
            fwrite((ptr + i)->facultyNumber, sizeof(facultyNumber), 1, fp);
            fwrite((ptr + i)->averageGrade, sizeof(averageGrade), 1, fp);
        }
    }

    fclose(fp);*/
    free(ptr);

    return 0;
}
