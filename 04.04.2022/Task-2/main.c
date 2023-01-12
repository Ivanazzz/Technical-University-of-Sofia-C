#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която намира броя на думите в низ */

    char string[] = "This is random text";
    int wordsCounter = 0;
    int counter = 0;

    while (1){
        char s = string[counter];
        if (s == '\0'){
            wordsCounter++;
            break;
        } else {
            if (s == ' '){
                wordsCounter++;
            }
            counter++;
        }
    }

    printf("The number of words is: %d", wordsCounter);
    return 0;
}
