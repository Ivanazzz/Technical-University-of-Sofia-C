#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = ' ';

    while (c != EOF) {
        c = getchar();
        putchar(c);
    }
    return 0;
}
