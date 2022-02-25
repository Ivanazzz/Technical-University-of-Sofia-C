#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    unsigned nWhite = 0,nOther = 0;
    unsigned nDigits[] = {0,0,0,0,0,0,0,0,0,0};
    int i;

    while ((c=getchar()) != EOF){
        if (c >= '0' && c <= '9'){
            nDigits[c-'0']++;
        }
        else if (c==' '){
            nWhite++;
        } else {
            ++nOther;
        }
    }

    for(i = 0;i < 10;++i){
        printf("%d->%u ",i, nDigits[i]);
    }
    printf("\nWhite spaces: %u\tOther chars: %u\n",nWhite, nOther);
    return 0;
}
