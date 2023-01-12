#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете функция, която намира дължината на низ без да ползвате вградените. */

    char string[] = "My name";
    int counter = 0;
    int charsCounter = 0;

    while (1){
        char s = string[counter];
        if (s == '\0'){
            break;
        } else {
            charsCounter++;
            counter++;
        }
    }

    printf("The length of the string is: %d", charsCounter);
    return 0;
}
