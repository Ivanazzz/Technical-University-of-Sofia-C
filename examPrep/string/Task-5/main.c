#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете функция, която връща броя на гласните в низ */

    int vowelsCount = 0;
    char str[35] = "This is again some random text";
    int i;

    for(i = 0; str[i] != '\0'; i++){
        if (str[i] == 'A' || str[i] == 'a' ||
        str[i] == 'E' || str[i] == 'e' ||
        str[i] == 'I' || str[i] == 'i' ||
        str[i] == 'O' || str[i] == 'o' ||
        str[i] == 'U' || str[i] == 'u' ||
        str[i] == 'Y' || str[i] == 'y'){
               vowelsCount++;
            }
    }

    printf("%d", vowelsCount);
    return 0;
}
