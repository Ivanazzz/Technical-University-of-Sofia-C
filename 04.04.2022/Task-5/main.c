#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете функция, която връща броя на гласните в низ  */

    char string[] = "This is again just random text";
    int vowelsCount = 0, i;

    for (i = 0; string[i] != '\0'; i++){
        char letter = string[i];
        if (letter == 'a' || letter == 'A' ||
            letter == 'e' || letter == 'E' ||
            letter == 'i' || letter == 'I' ||
            letter == 'o' || letter == 'O' ||
            letter == 'u' || letter == 'U') {
            vowelsCount++;
            }
    }

    printf("The number of vowels is: %d", vowelsCount);
    return 0;
}
