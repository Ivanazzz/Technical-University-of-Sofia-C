#include <stdio.h>
#include <stdlib.h>

typedef struct Student{
    char name[20];
    int age;
    char speciality[10];
    char facultyNumber[10];
} Student;

void printInfo(Student student);

int main()
{
    // Да се направи програма, която съхранява данни за студенти в структура и ги отпечатва. Данните са: ИМЕ, ГОДИНИ, СПЕЦИАЛНОСТ, ФАКУЛТЕТЕН НОМЕР

    while(1){
        char command[5];
        printf("To add student type 'Yes' to end the program type 'Stop': ");
        scanf("%s", command);
        printf("\n");
        if(strcmp(command, "Yes") == 0){
            Student student;
            printf("Enter name: ");
            scanf("%s", student.name);
            printf("Enter age: ");
            scanf("%d", &student.age);
            printf("Enter specialty: ");
            scanf("%s", student.speciality);
            printf("Enter faculty number: ");
            scanf("%s", student.facultyNumber);
            printf("\n");
            printInfo(student);
            printf("\n");
        }else {
            break;
        }
    }
    return 0;
}

void printInfo(Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Specialty: %s\n", student.speciality);
    printf("Faculty number: %s\n", student.facultyNumber);
}
