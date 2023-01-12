#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете функция, която намира дължината на низ без да ползвате вградените. */

    char str[20] = "orange";
    int counter = 0, i;

    for(i = 0; str[i] != '\0'; i++){
        counter++;
    }
    printf("%d", counter);
    return 0;
}
