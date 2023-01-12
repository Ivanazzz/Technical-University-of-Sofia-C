#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която намира броя на думите в низ */

    char str[50] = "This is some random text";
    int wordsCounter;
    int i;

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            wordsCounter++;
        }
    }
    wordsCounter++;
    printf("%d", wordsCounter);

    return 0;
}
