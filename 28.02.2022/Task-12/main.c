#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Учебна зала има правоъгълен размер w на h метра. Залата е разделена на две части – лява и дясна,
    с коридор приблизително по средата. В лявата и в дясната част има редици с бюра. В задната част на залата
    има голяма входна врата. В предната част на залата има катедра с подиум за преподавателя. Едно работно
    място заема 70 на 120 cm. Коридорът е широк поне 100 cm. Изчислено е, че заради входната врата се губи
    точно 1 работно място, а заради катедрата се губят точно 2 работни места. Напишете програма, която прочита
    размерите на учебната зала и изчислява броя работни места в нея при описаното разположение.
    вход: 15 8,9   изход: 129
    вход 8,4 5,2 изход: 39  */

    float totalWidthInMeters, totalLengthInMeters;

    printf("Enter the hall width: ");
    scanf("%f", &totalWidthInMeters);
    printf("Enter the hall length: ");
    scanf("%f", &totalLengthInMeters);

    float totalWidthInCentimeters = totalWidthInMeters * 100;
    float totalLengthInCentimeters = totalLengthInMeters * 100;
    int totalUsedPlaces = 3;
    int totalUsedWidth = 100;

    totalWidthInCentimeters = totalWidthInCentimeters - totalUsedWidth;

    int totalRows = totalLengthInCentimeters / 70;
    int totalColumns = totalWidthInCentimeters / 120;

    int totalPlaces = totalRows * totalColumns - totalUsedPlaces;

    printf("Total places in the hall: %d", totalPlaces);

    return 0;
}
