#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която заменя малките букви в низ с големи  */

    char string[] = "fantasy";
    int i;

    for (i = 0; string[i] != '\0'; i++){
        string[i] = toupper(string[i]);
    }

    printf("The string all in upper cases is: %s", string);
    return 0;
}
