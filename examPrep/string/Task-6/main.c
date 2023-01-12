#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която заменя малките букви в низ с големи */

    char str[20] = "Orange Grapes Apple";
    int i;

    for(i = 0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]);
    }

    printf("%s", str);
    return 0;
}
