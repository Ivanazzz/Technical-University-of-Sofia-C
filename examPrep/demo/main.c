#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("data.txt", "r");
    if(fp == NULL){
        printf("Error opening file1111!");
        exit(1);
    }

    char name[100];
    int age;
    char specialty[5];
    char facultyNumber[11];
    float grade;

    float neededGrade;
    scanf("%f", &neededGrade);

    FILE *fp2;
    fp2 = fopen("new.txt", "w");
    if(fp2 == NULL){
        printf("Error opening file2222!");
        exit(1);
    }


    while(!feof(fp)){
        fscanf(fp, "%s %d %s %s %f", name, &age, specialty, facultyNumber, &grade);
        if(grade >= neededGrade){
            /*fwrite(name, 1, sizeof(name), fp2);
            fwrite(age, 1, sizeof(age), fp2);
            fwrite(specialty, 1, sizeof(specialty), fp2);
            fwrite(facultyNumber, 1, sizeof(facultyNumber), fp2);
            fwrite(grade, 1, sizeof(grade), fp2);*/
            //fprintf(fp2, "%s %d %s %s %.2f\n", name, age, specialty, facultyNumber, grade);

            printf("%s\n", name);
            printf("%d\n", age);
            printf("%s\n", specialty);
            printf("%s\n", facultyNumber);
            printf("%.2f\n", grade);
        }
    }

    fclose(fp2);
    fclose(fp);

    return 0;
}
