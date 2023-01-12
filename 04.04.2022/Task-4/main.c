#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която сравнява два низа без да ползвате вградените функции  */

    char firstString[] = "dog";
    char secondString[] = "cat";
    int flag = 1;

    if (strlen(firstString) != strlen(secondString)){
        flag = 0;
    } else {
        int i;

        for (i = 0; firstString[i] != '\0'; i++){
            if (firstString[i] != secondString[i]){
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1){
        printf("The words are the same!");
    } else {
        printf("The words are not the same!");
    }
    return 0;
}
