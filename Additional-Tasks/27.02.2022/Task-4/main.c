#include <stdio.h>
#include <stdlib.h>

int max(int, int);

int main()
{
    /* Направете функция, която намира по-голямото от две числа. */

    int x = 4,y = 5;

    printf("%d", max(x, y));

    return 0;
}

int max(int num1, int num2)
 {

   int result;

   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return result;
}
