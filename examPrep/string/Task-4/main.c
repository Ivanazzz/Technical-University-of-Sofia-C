#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която сравнява два низа без да ползвате вградените функции */
    char str1[20] = "student";
    char str2[20] = "Student";

    if(strlen(str1) != strlen(str2)){
        printf("The strings are not equal!");
        exit(1);
    } else {
        int i;
        for(i = 0; str1[i] != '\0'; i++){
            if(str1[i] != str2[i]){
                printf("The strings are't equal!");
                exit(2);
            }
        }
    }

    printf("The strings are equal!");
    return 0;
}
