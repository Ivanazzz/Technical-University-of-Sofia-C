#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// function declaration
long double power(int, int);
double power2(int base, int power);

int main()
{
    int a,b;

    printf("base = ");
    scanf("%d", &a);
    printf("exp = ");
    scanf("%d", &b);

    printf("power:%d**%d=%Lg\n", a, b, power(a,b));
    printf("power2:%d**%d=%g\n", a, b, power2(a,b));
    printf("pow:%d**%d=%g\n", a, b, pow(a,b));

    return 0;
}

// function definition
long double power(int x, int y){
    long double retValue;
    int i;

    for(i = y,retValue = 1;i >= 1;--i){
        retValue *= x;
    }

    return retValue;
}

double power2(int base, int power){
    return exp(power*log(base));
}

