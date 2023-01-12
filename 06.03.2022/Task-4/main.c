#include <stdio.h>
#include <stdlib.h>

char* decimalToBinary();

int main()
{
    /* Напишете функция, която превръща от десетично в двоично едно число. */
    printf("%s", decimalToBinary());

    return 0;
}

char* decimalToBinary() {
    int decimalNumber;
    char binaryNumber[60];

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    while (1) {
        decimalNumber / 2;

        if (decimalNumber == 0) {
            strcat(binaryNumber, '1');
            break;
        }

        if (decimalNumber % 2 == 1) {
            strcat(binaryNumber, '1');
        } else {
            strcat(binaryNumber, '0');
        }


    }
    return binaryNumber;
}
