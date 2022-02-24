#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define END 100
#define TRUE 1
#define FALSE !TRUE
#define BOOLEAN int

int main()
{
    short temp;
    short sum = 0;
    unsigned short cnt = 0;
    short minTemp;
    unsigned short day = 0;
    short maxNegTemp = SHRT_MIN;
    BOOLEAN isInit = FALSE;


    do {
        printf("T:");
        scanf("%hi",&temp);
        if (temp == END){
            break;
        }
        sum += temp;
        ++cnt;  // cnt += 1  cnt = cnt+1
    /*
        x = 3
        y = 7
        z = ++x + y++ => ++x z = x+y y++ => x=4, z=4+7=11, y=8
    */
        if (day == 0){
            minTemp = temp;
            day = 1;
        }else if (minTemp > temp){
            minTemp = temp;
            day = cnt;
        }
        if (temp < 0){
            if (isInit == FALSE){
                maxNegTemp = temp;
                isInit = !isInit;
            }else if (maxNegTemp < temp){
                maxNegTemp = temp;
            }
        }
    } while(TRUE);  // !(temp==END) temp!=END

    if (!cnt){  // cnt==0
      printf("No temperatures...\n");
    }else {
        printf("Average T:%g\n",(float)sum/cnt);
        printf("Min Temperature: %hi -> %hu\n", minTemp, day);
        if (isInit){
            printf("Max Negative Temperature is %hi\n", maxNegTemp);
        }else {
            printf("No negative temp...\n");
        }
    }
//    printf("Hello world!\n");
    return 0;
}
